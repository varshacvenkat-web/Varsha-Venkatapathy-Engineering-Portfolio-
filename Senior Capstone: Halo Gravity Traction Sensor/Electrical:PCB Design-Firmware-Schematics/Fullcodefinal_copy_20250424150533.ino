#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include "HX711.h"

// ---------- Pin Definitions ----------
// HX711 (load cell amplifier)
#define DOUT_PIN 2      // Connect HX711 DOUT to digital pin 2 (JP1 pin5)
#define CLK_PIN  3      // Connect HX711 CLK to digital pin 3 (JP1 pin6)

// Buttons (using internal pull-ups)
// Use two digital pins for the power and calibration buttons.
#define POWER_BUTTON      4   // Connect power button to digital pin 4 (JP1 pin7)
#define CALIBRATION_BUTTON 5   // Connect calibration button to digital pin 5 (JP1 pin8)

// LCD (using Adafruit_ST7789 library)
// IMPORTANT: Use pins that do not conflict with hardware SPI.
// On the Nano RP2040 Connect, hardware SPI uses: 
//    SCK = D13 (JP2 pin1), MOSI = D11, MISO = D12.
#define TFT_CS   10    // Connect LCD CS to digital pin 10 (JP1 pin? – see wiring table below)
#define TFT_DC   8     // Connect LCD DC to digital pin 8  (JP1 pin? – choose a free digital pin not used by buttons)
#define TFT_RST  9     // Connect LCD RST to digital pin 9  (JP1 pin?)

// -------------------------------------

// Create an instance of the HX711 and the LCD display
HX711 scale;
float calibration_factor = 10681.00;  // Adjust this to your load cell/calibration
bool systemOn = false;                 // Initially, the scale is off
unsigned long previousMillis = 0;
const long weightUpdateInterval = 100; // in milliseconds (adjust update speed as needed)
bool lastPowerButtonState = HIGH;
bool lastCalibrationButtonState = HIGH;

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

// Helper function: clear the screen and display centered text.
void displayCenteredText(const String &text, uint16_t color) {
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextSize(4); // Adjust for large, clear text
  int16_t x1, y1;
  uint16_t w, h;
  tft.getTextBounds(text, 0, 0, &x1, &y1, &w, &h);
  int16_t x = (tft.width() - w) / 2;
  int16_t y = (tft.height() - h) / 2;
  tft.setCursor(x, y);
  tft.setTextColor(color);
  tft.println(text);
}

void setup() {
  // Use 9600 baud for Serial if preferred (or 115200)
  Serial.begin(9600);

  // Configure button pins (internal pull-ups)
  pinMode(POWER_BUTTON, INPUT_PULLUP);
  pinMode(CALIBRATION_BUTTON, INPUT_PULLUP);

  // Initialize the HX711 load cell amplifier
  scale.begin(DOUT_PIN, CLK_PIN);
  scale.set_scale(calibration_factor);
  delay(1000);
  // Tare the scale to set the current reading as zero.
  scale.tare();
  Serial.println("Scale tared. Ready!");

  // Initialize the LCD via hardware SPI
  SPI.begin();
  tft.init(240, 320);       // Initialize for a 240x320 display
  tft.setRotation(1);       // Adjust rotation as needed (0–3)
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(4);

  // Initially, do not display any calibration message;
  // the LCD will simply show "System Off" until the power button is pressed.
  displayCenteredText("System Off", ST77XX_RED);
  delay(1000);
}

void loop() {
  // Read the current button states (active LOW)
  bool currentPowerButton = digitalRead(POWER_BUTTON);
  bool currentCalibrationButton = digitalRead(CALIBRATION_BUTTON);

  // --- Handle Power Button (toggle system state) ---
  if (currentPowerButton == LOW && lastPowerButtonState == HIGH) {
    delay(50);  // simple debounce
    systemOn = !systemOn;
    if (systemOn) {
      Serial.println("System On");
      displayCenteredText("System On", ST77XX_GREEN);
      delay(1000);
    } else {
      Serial.println("System Off");
      displayCenteredText("System Off", ST77XX_RED);
      delay(1000);
    }
  }
  lastPowerButtonState = currentPowerButton;

  // --- Handle Calibration Button ---
  if (currentCalibrationButton == LOW && lastCalibrationButtonState == HIGH) {
    delay(50);  // debounce delay
    if (systemOn) {  // Only allow calibration when system is on
      Serial.println("Calibration");
      displayCenteredText("Calibration", ST77XX_YELLOW);
      scale.tare();  // Reset the zero point (should bring reading to 0)
      delay(1000);
      scale.set_scale(calibration_factor);
      Serial.println("Recalibrated");
      displayCenteredText("Recalibrated", ST77XX_CYAN);
      delay(1000);
    }
  }
  lastCalibrationButtonState = currentCalibrationButton;

  // --- Real-Time Weight Reading ---
  if (systemOn) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= weightUpdateInterval) {
      previousMillis = currentMillis;
      float weight = scale.get_units(10);  // Average 10 readings for stability
      // Print to Serial Monitor for debugging
      Serial.print("Weight: ");
      Serial.print(weight, 2);
      Serial.println(" kg");

      // Update only the weight display area on the LCD (do not clear the entire screen)
      tft.fillRect(0, 100, tft.width(), 50, ST77XX_BLACK);  // Clear area for weight
      tft.setCursor(10, 110);
      tft.print(weight, 2);
      tft.print(" kg");
    }
  }
}
