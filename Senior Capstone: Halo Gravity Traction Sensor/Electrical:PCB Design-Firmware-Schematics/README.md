## Electrical, PCB Design, Firmware, and Schematics  
## Senior Capstone: Halo Gravity Traction Load Monitoring Device

This directory contains all electrical engineering components of the halo gravity traction load-monitoring system, including schematics, PCB design files, firmware, and reference circuit images. These files document the full electrical workflow from concept to implementation.

---

## Contents

## Electrical Schematic
**File:** Electrical Schematic.pdf  
A complete wiring diagram detailing all electrical connections for the load monitoring device.  
Includes:
- Load cell interface  
- HX711 amplifier wiring  
- Microcontroller I/O assignments  
- Power regulation and battery connections  
- Safety components and grounding strategy  

---

## Firmware
**File:** Fullcodefinal_copy_20250424150533.ino  
The final microcontroller firmware used to:
- Read load cell data via HX711  
- Apply calibration factors  
- Perform real-time signal filtering  
- Stream traction load to external devices  
- Log sensor values for testing and verification  

Written in Arduino C/C++ for rapid prototyping and device testing.

---

## PCB Design Files
These files correspond to the custom PCB developed for the traction load-monitoring system.

### Board Layout  
**File:** SpineAlignPCB (1).brd  
Includes:
- Component placement  
- Routing of analog and digital traces  
- Ground plane and power distribution  
- Mounting hole alignment for enclosure  

### Schematic Source  
**File:** SpineAlignPCB (1).sch  
Editable schematic source file for PCB manufacturing or revision.

---

## Reference Circuit Image
**File:** circuit (2).png  
Circuit image used during early prototyping and breadboard validation.  
Shows:
- Preliminary load cell + amplifier wiring  
- Pin mapping for MCU  
- Initial design considerations prior to final PCB creation  

---

## Design Considerations

### Signal Integrity
- Short trace lengths for low-noise analog signals  
- Dedicated analog ground routing  
- Shielding and filtering for load cell signals  

### Power Management
- Battery-powered operation  
- Onboard voltage regulation  
- Low-power microcontroller configuration  

### Safety and Reliability
- Reverse-polarity protection  
- Overcurrent considerations  
- Mechanical strain relief for cable connections  

---

## Firmware Overview

### Main Functions
- `readLoadCell()`: Retrieves calibrated weight values  
- `tare()`: Zeros load cell drift  
- `HX711.begin()`: Initializes ADC amplifier  
- `Serial.write()`: Streams continuous load values  

### Sampling Rate
Configured for stable real-time data acquisition without significant lag.

---

## Recommended Tools

To edit or view files:
- **EAGLE or KiCad** — for PCB `.brd` / `.sch` files  
- **Arduino IDE** — for `.ino` firmware  
- **Adobe/Preview** — to view PDF schematics  
- **Any image viewer** — for `.png` circuit references  

---

## Usage Guide

1. Review the Electrical Schematic for wiring details  
2. Use PCB files for manufacturing or revisions  
3. Flash firmware to microcontroller using Arduino IDE  
4. Validate sensor readings with circuit reference image  
5. Integrate PCB into mechanical enclosure  


