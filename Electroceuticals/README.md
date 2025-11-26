# The Self-Charging Heart: Triboelectric Nanogenerator-Powered Cardiac Pacemaker

**BME 590 Electroceuticals - Final Project**  
*Varsha Venkatapathy & Nalaya Giraud*  
*Joint Department of Biomedical Engineering*  
*UNC Chapel Hill & NC State University*

---

## Project Overview

This project evaluates a revolutionary self-rechargeable cardiac pacemaker system powered by an **inertia-driven triboelectric nanogenerator (I-TENG)**. By converting natural body motion into electrical energy, this technology aims to eliminate the need for battery replacement surgeries that currently affect 100,000+ pacemaker patients annually.

### The Problem

- **1 million** new pacemaker implants worldwide each year
- Battery lifespan: only **5-10 years**
- **100,000** replacement surgeries annually
- Each replacement surgery carries risks: infection, lead failure, patient anxiety
- **$20,000** average replacement cost → **$2-3 billion** global healthcare burden

---

## Technology: How I-TENG Works

### Core Mechanism

The I-TENG device harvests energy from the body's natural movement through five key components:

1. **Triboelectric Materials**: Stacked layers of PFA (negative) and PVA-NH₂ (positive)
2. **Freestanding Copper Mass**: Oscillates with chest movement
3. **Vertical Displacement**: Utilizes ~6 cm of chest movement during walking
4. **Contact-Separation**: Repeated contact generates electric charges
5. **Five-Layer Stack**: Amplifies voltage output to 136 V

### Design Specifications

- **Size**: Coin-sized (comparable to CR3032 battery)
- **Power Output**: 4.9 μW/cm³ RMS
- **Peak Voltage**: 136 V
- **Peak Current Density**: 2 μA/cm³
- **Conversion Efficiency**: 0.235%
- **Durability**: >30,000 cycles without performance loss

---

## Key Findings

### Laboratory Results

- Successfully generated usable power from minimal body motion
- Maintained consistent output across extended testing cycles
- Demonstrated voltage levels sufficient for pacemaker operation

### Preclinical Animal Studies

- **Energy Harvesting**: 144 mW/day during normal activities
- **Sleep Mode**: Device charged even during minimal movement (animal at rest)
- **Real-Time Operation**: Successfully maintained VVI-mode pacing
- **Biocompatibility**: Mild inflammatory response comparable to standard devices
- **Wireless Monitoring**: Integrated BLE system for data collection

### Technology Readiness Level (TRL)

**Current Status**: TRL 5-6 (validated in relevant environment)

---

## Advantages Over Existing Solutions

| Technology | Power Output | Key Limitations |
|------------|-------------|-----------------|
| **RF/Inductive Coupling** | <100 μW | Requires alignment, bulky chargers |
| **Thermoelectric** | Few μW | Depends on temperature gradient |
| **MEMS Spring** | Hundreds nW | Off-axis losses, degradation in Ti can |
| **I-TENG (This Work)** | 4.9 μW/cm³ | ✓ Alignment-free, compact, body-motion powered |

---

## Regulatory Pathway

### 510(k) Clearance Process

The device follows a seven-step FDA regulatory pathway:

1. Define intended use & select predicate device
2. Non-clinical evaluation (ISO 10993-1 biocompatibility)
3. Risk analysis & mitigation
4. Performance testing & validation
5. Sterilization/shelf-life validation (ISO 11607)
6. FDA review & queries
7. Clearance (or additional data request)

### Compliance Requirements

- **Electrical Safety**: IEC 60601-1-2 (EMC)
- **MR Compatibility**: Testing for safe imaging
- **Cybersecurity**: Pre- and post-market vulnerability management
- **Biocompatibility**: ISO 10993 standards

---

## Challenges & Future Directions

### Current Limitations

1. **Power Dependency**: Output varies with patient activity level
2. **Sedentary Patients**: Limited energy harvesting in low-activity individuals
3. **Long-Term Safety**: Requires extended human trials
4. **Manufacturing**: Scaling precision fabrication of triboelectric materials
5. **Patient Variability**: May need adaptive systems for different activity profiles

### Next Steps

- [ ] Miniaturization & material optimization
- [ ] Long-term durability studies in humans
- [ ] Chronic implantation safety validation
- [ ] Adaptive power management algorithms
- [ ] First-in-human clinical trials
- [ ] Full FDA regulatory approval

### Potential Expansion

This technology could extend beyond pacemakers to:
- Implantable cardioverter-defibrillators (ICDs)
- Neurostimulators
- Drug delivery systems
- Other implantable medical devices requiring sustained power

---

## Technical Specifications

### Device Architecture

```
Five-Stacked I-TENG Unit
├── Au-coated Substrates
├── PFA Layer (Negative triboelectric material)
├── PVA-NH₂ Layer (Positive triboelectric material)
├── Freestanding Cu Mass
└── Power Management PCB
```

### Operating Principle

1. **Equilibrium State**: Copper mass at rest
2. **Upward Motion**: Chest rises → Cu contacts upper layer → charge generation
3. **Downward Motion**: Chest lowers → Cu contacts lower layer → charge generation
4. **Energy Harvesting**: Continuous cycling converts motion to electrical energy
5. **Power Management**: PCB regulates voltage and charges battery/capacitor

---

## Project Deliverables

### Included Materials

- **IEEE Format Paper**: Complete technical evaluation and analysis
- **Final Presentation**: Visual summary of technology and findings
- **Supporting Documentation**: Design specifications and test results

---

## Acknowledgments

Special thanks to:
- **Dr. Mike Wilkins** - Joint Department of Biomedical Engineering at UNC-Chapel Hill & NC State
- BME 590 Electroceuticals Course Team

---

## References

1. Ryu, H., Park, H.-m., Kim, M.-K., et al. (2021). "Self-rechargeable cardiac pacemaker system with triboelectric nanogenerators." *Nature Communications*, 12, 4374. [DOI: 10.1038/s41467-021-24417-w](https://doi.org/10.1038/s41467-021-24417-w)

2. Code of Federal Regulations, Title 21, § 807.92, "Contents of a 510(k) submission"

3. U.S. FDA, "Content of Premarket Submissions for Management of Cybersecurity in Medical Devices" (2014)

---

## Authors

**Varsha Venkatapathy**  
📧 vvenkatapathy@unc.edu  
University of North Carolina at Chapel Hill  
Joint Department of Biomedical Engineering

**Nalaya Giraud**  
📧 ngiraud@unc.edu  
University of North Carolina at Chapel Hill  
Joint Department of Biomedical Engineering

---

## License

This project was completed as part of academic coursework at UNC Chapel Hill and NC State University.

---

*Course*: BME 590 - Electroceuticals  
*Term*: Fall 2024  
*Institution*: Joint Department of Biomedical Engineering, UNC-Chapel Hill & NC State
