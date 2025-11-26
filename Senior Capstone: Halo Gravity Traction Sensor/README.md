# SpineAlign: Real-Time Monitoring Device for Halo Gravity Traction

**BME Senior Design Project**  
*Lampe Joint Department of Biomedical Engineering*  
*UNC Chapel Hill & NC State University*

![SpineAlign Logo](Images/logo.png)

---

## Team Members

- **Ayse Baysal**
- **Ari Jindal**
- **Lucas Kiukawa**
- **Davi Souza**
- **Varsha Venkatapathy**

---

## Project Overview

SpineAlign is a medical monitoring device designed to continuously track and record traction load during halo gravity traction (HGT) therapy for severe scoliosis patients. The device bridges a critical gap in patient compliance monitoring, enabling physicians to make data-driven treatment adjustments and avoid unnecessary load increases.

### The Problem

**Severe Scoliosis Treatment Challenges:**
- Affects 2-3% of the population, most commonly adolescents
- Severe scoliosis: spinal curve >40-50 degrees
- Causes visible deformity, back pain, limited mobility, breathing/cardiac issues
- Requires preoperative Halo Gravity Traction (HGT) before corrective surgery

**Current HGT Limitations:**
- Patients use HGT for weeks to months with weekly doctor check-ins
- No way to monitor actual applied load between visits
- Patients often reduce or remove weights due to discomfort
- Doctors may unnecessarily increase load, thinking treatment isn't working
- **Reality**: Issue is often inconsistent patient use, not inadequate force

### Our Solution

SpineAlign provides **integrated real-time, continuous load monitoring** to ensure precise treatment adjustments based on actual applied forces and usage duration.

**Key Features:**
-  **Real-time load monitoring** with built-in LCD display
-  **Continuous data logging** on SD card (1 week+ storage capacity)
-  **Long-lasting battery** designed for entire treatment period
-  **Easy attachment** between halo ring and traction cable
-  **Portable design** works with walker, wheelchair, or bed setups
-  **Doctor review capability** via computer during weekly check-ins
-  **95% measurement accuracy** across full load range

---

## Repository Structure

```
SpineAlign/
├── Mechanical_CAD_Files/
│   ├── Device_Housing.SLDPRT
│   ├── Mounting_Bracket.SLDPRT
│   ├── Assembly_Drawings/
│   └── Manufacturing_Specs/
│
├── Electrical_PCB_Design_Firmware/
│   ├── PCB_Design/
│   │   ├── Schematic.pdf
│   │   ├── PCB_Layout/
│   │   └── BOM.xlsx
│   ├── Firmware/
│   │   ├── src/
│   │   ├── lib/
│   │   └── README.md
│   └── Datasheets/
│
├── Images/
│   ├── Device_Photos/
│   ├── System_Diagrams/
│   ├── Testing_Results/
│   └── Poster_Presentation.pdf
│
├── Documentation/
│   ├── Design_History_File/
│   ├── Testing_Protocols/
│   ├── User_Manual.pdf
│   ├── Risk_Analysis.pdf
│   └── Final_Report.pdf
│
└── README.md
```

---

## Technical Specifications

### Hardware Components

**Load Sensing:**
- High-precision load cell for traction force measurement
- Measurement range: 0-50 lbs (typical HGT range)
- Accuracy: ±5% across full range

**Data Storage:**
- SD card module for continuous data logging
- Storage capacity: 1+ week of continuous monitoring
- CSV format for easy data analysis

**Display:**
- LCD screen for real-time load visualization
- Visible to doctors and caregivers during adjustment

**Power:**
- Long-lasting battery system
- Designed for full treatment duration without recharging
- Low-power design for extended operation

**Mechanical:**
- Durable housing tested via drop tests
- Quick-attach mechanism for multiple setup configurations
- Lightweight and portable design

### Software Features

- Real-time load data acquisition
- Timestamped data logging
- Calibration and zeroing functions
- Low-power sleep modes
- Data export for physician review

---

## Testing & Validation

### Completed Tests

| Test Category | Description | Results |
|--------------|-------------|---------|
| **Drop Tests** | Verified durability of device casing | ✅ Passed |
| **Electrical Checks** | Stable power, wiring, and data flow | ✅ Passed |
| **Calibration** | Accurate zeroing and load measurement | ✅ Passed |
| **Environmental** | Signal stability under vibration/noise | ✅ Passed |
| **SD Card Validation** | Reliable data storage and retrieval | ✅ Passed |
| **Load Range Testing** | Accuracy across expected load range | ✅ 95% accuracy |

### Accuracy Validation

- System output matched applied weight within **95% accuracy**
- Tested across full range of expected clinical loads
- Calibration protocol ensures consistent performance

---

## Clinical Application

### Target Users

- Pediatric spine centers
- Orthopedic surgeons specializing in scoliosis
- Hospital staff managing halo traction therapy
- Caregivers of pediatric scoliosis patients

### Clinical Workflow Integration

1. **Device Attachment**: Quick-connect between halo ring and traction cable
2. **Load Verification**: LCD displays real-time load for initial setup
3. **Continuous Monitoring**: Device logs all load data throughout treatment
4. **Weekly Check-ins**: Doctor reviews usage patterns via SD card data
5. **Data-Driven Adjustments**: Physician adjusts treatment based on actual compliance

### Benefits

- ✅ **Prevents unnecessary load increases** due to unrecognized underuse
- ✅ **Reduces treatment complications** through precise monitoring
- ✅ **Shortens treatment duration** via optimized load management
- ✅ **Improves patient outcomes** through evidence-based adjustments
- ✅ **Enhances compliance monitoring** outside clinical setting

---

## Market & Regulatory Considerations

### Market Opportunity

- **Gap Identification**: First device to track real-time traction load and usage outside clinic
- **Competitive Advantage**: Enables data-driven treatment adjustments not currently possible
- **Integration**: Easy integration with existing HGT setups across hospital environments

### FDA Regulatory Pathway

**Classification**: Likely Class I or II device under FDA guidelines

**Potential Pathways:**
- 510(k) exemption (Class I)
- 510(k) clearance (Class II) - most likely pathway

**Key Considerations:**
- Non-invasive monitoring device
- Does not directly deliver therapy
- Enhances existing standard of care

### Reimbursement Strategy

- May not have direct CPT code reimbursement
- Supports **bundled care models** for scoliosis treatment
- Improves outcomes in already-reimbursed procedures
- Potential cost savings through:
  - Reduced treatment complications
  - Optimized treatment duration
  - Fewer unnecessary load adjustments

---

## Future Development

### Immediate Next Steps

- [ ] Complete comprehensive validation testing
- [ ] Finalize design for manufacturing
- [ ] Develop user manual and training materials
- [ ] Prepare regulatory submission documentation

### Long-Term Vision

**Enhanced Features:**
- Wireless data transmission to physician dashboard
- Mobile app for caregiver monitoring
- Integration with electronic health records (EHR)
- Machine learning algorithms for treatment optimization
- Real-time alerts for compliance issues

**Expansion Opportunities:**
- Adaptation for other traction-based therapies
- Integration with other orthopedic monitoring systems
- International market expansion
- Pediatric and adult applications

---

## How to Use This Repository

### For Mechanical Engineers
Navigate to `Mechanical_CAD_Files/` for:
- Complete CAD models (SolidWorks format)
- Assembly drawings
- Manufacturing specifications
- Bill of materials

### For Electrical Engineers
Navigate to `Electrical_PCB_Design_Firmware/` for:
- PCB schematics and layout files
- Component datasheets
- Firmware source code
- Programming instructions

### For Software Developers
Navigate to `Electrical_PCB_Design_Firmware/Firmware/` for:
- Embedded C/C++ source code
- Library dependencies
- Compilation instructions
- Firmware update procedures

### For Clinical Users
Navigate to `Documentation/` for:
- User manual
- Setup instructions
- Troubleshooting guide
- Safety information

---

## Acknowledgments

We extend our deepest gratitude to the following individuals for their invaluable guidance, feedback, and support throughout this project:

- **Dr. Lloyd Hey** - Clinical expertise and project guidance
- **Dr. Kenneth Donnelly** - Orthopedic surgery consultation
- **Dr. Devin Hubbard** - Medical device development advising
- **Joseph Sharp** - Technical mentorship
- **Dr. Akif Baysal** - Engineering consultation
- **Charles McCall** - Design feedback
- **Dr. Glenn Walters** - Project advising

Special thanks to the **Lampe Joint Department of Biomedical Engineering** at UNC Chapel Hill and NC State University for providing resources and support.

---

## References

1. SpineHealth Foundation. (n.d.). *Scoliosis: Information you can use*. Retrieved March 27, 2025, from https://spinehealth.org/article/scoliosis-information-you-can-use/

2. Boston Children's Hospital. (n.d.). *Halo gravity traction*. Retrieved March 27, 2025, from https://www.childrenshospital.org/treatments/halo-gravity-traction

3. University of South Alabama. (2023, January 9). *Halo gravity traction treatment helps young scoliosis patients*. Retrieved March 27, 2025, from https://www.southalabama.edu/departments/publicrelations/pressreleases/010923halo.html

---

## License

This project was completed as part of senior design coursework at UNC Chapel Hill and NC State University. All rights reserved by the project team and sponsoring institutions.

---

## Contact

For questions or collaboration opportunities, please contact the project team through the Lampe Joint Department of Biomedical Engineering:

**Lampe Joint Department of Biomedical Engineering**  
University of North Carolina at Chapel Hill  
North Carolina State University

---

*Project completed: Spring 2025*  
*Course: BME Senior Design*  
*Institutions: UNC Chapel Hill & NC State University*
