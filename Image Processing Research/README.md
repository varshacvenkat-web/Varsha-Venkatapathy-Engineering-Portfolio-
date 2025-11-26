# Mechanically Anisotropic Tissue-Mimicking Phantoms for Ultrasound Imaging Protocol Development

**Research Project** | Abrams Scholarship Research | 2023-2024  
**Authors**: Varsha Venkatapathy, J. Aidan Armstrong, Sabiq Muhtadi, Caterina M. Gallippi  
**Institution**: Joint Department of Biomedical Engineering, UNC Chapel Hill & NC State University

## Project Overview

This research develops mechanically anisotropic tissue-mimicking phantoms using 3D-printed polylactic acid (PLA) fibers embedded in viscous fluids to validate ultrasonic imaging protocols for assessing mechanical anisotropy. The work demonstrates the feasibility of creating reproducible phantom models that exhibit detectable directional mechanical properties, enabling rigorous evaluation of advanced ultrasound imaging methods.

## Motivation & Clinical Significance

Many biological tissues—including muscle, kidney, and breast—exhibit **mechanical anisotropy**: directionally dependent mechanical properties that reflect structural organization and tissue health. Current clinical ultrasound lacks robust methods to quantify tissue anisotropy noninvasively. Validated tissue-mimicking phantoms are essential for:

- Developing and testing anisotropy imaging protocols
- Establishing standards for ultrasound system performance
- Training clinicians on anisotropy assessment techniques
- Advancing precision medicine applications

## Research Hypothesis

Phantoms constructed with 3D-printed PLA fibers embedded in viscous fluids (cornstarch or milk) will exhibit **detectable mechanical anisotropy** characterized by variations in displacement induced by spatially asymmetric Viscoelastic Response (VisR) ultrasound excitations at different orientations relative to the embedded fibers.

## Methodology

### Phantom Design & Fabrication

**Fiber Specifications**:
- Material: Polylactic acid (PLA), 3D-printed
- Cross-sectional area: 0.4 × 0.4 mm²
- Fiber spacing: 0.6 mm
- Configuration: 30 fibers per row
- Support material: Ultimaker PVA (water-soluble, dissolved post-printing)

**Two Phantom Variants**:

| Phantom Type | Background Medium | Rationale |
|--------------|-------------------|-----------|
| **Milk-Embedded** | Whole milk | Viscosity provides structural stability; maintains uniform embedding; minimizes air artifacts |
| **Cornstarch-Embedded** | Cornstarch-water solution | Viscous suspension medium; prevents air bubble trapping; enables clear imaging |

### Imaging Protocol: Viscoelastic Response (VisR) Ultrasound

**VisR Imaging Principles**:
- Applies acoustic radiation force to induce tissue displacement
- Detects displacement response via ultrasound tracking
- Generates tissue mechanical property maps (Relative Elasticity)
- Quantifies shear elasticity relative to applied force amplitude

**Experimental Procedure**:
1. Phantom positioned at two distances from transducer:
   - 15 mm above phantom
   - 5 mm above phantom
2. Transducer rotated in 30° increments from 0° to 180°
3. VisR imaging performed at each rotation angle
4. Relative Elasticity (RE) maps analyzed from region of interest
5. RE values plotted vs. rotation angle to assess anisotropy

**Transducer Parameters**:
| Parameter | Value |
|-----------|-------|
| Transducer Model | Siemens 9L-4 |
| Excitation Center Frequency | 4.21 MHz |
| Tracking Center Frequency | 6.15 MHz |
| Focal Depth | 30 mm |
| Excitation F/# | 1.5 |
| Tracking Transmit F/# | 1.5 |
| Tracking Receive F/# | 0.75 |
| Pulse Repetition Frequency (PRF) | 10 kHz |

### Image Analysis

**Region of Interest (ROI) Definition**:
- Axial depth: 0-2 mm above focal depth (30 mm)
- Lateral window: 1 mm centered window
- Analysis method: Median relative elasticity values extracted per angle

## Results & Findings

### Key Observations

1. **Anisotropy Detection**: Both milk and cornstarch phantoms showed angle-dependent variations in relative elasticity values
   - Milk phantom: Median RE range 130–240
   - Cornstarch phantom: Median RE range 40–320

2. **Directional Response**: Peak displacement distributions revealed directional sensitivity at different transducer-phantom distances

3. **Unexpected Patterns**: Results diverged from anticipated sinusoidal trend, suggesting complex material interactions

### Challenges Encountered

**1. Gelatin Phantom Failure**
- Initial gelatin-embedded phantom failed due to air bubble-induced signal distortion
- Limited feasibility for this background medium

**2. Peak Displacement Misalignment**
- Expected peak displacement to align with 30 mm focal depth
- Actual peak displacement did not align despite closer transducer proximity (5 mm)
- Likely cause: Material properties and acoustic impedance mismatch

**3. Acoustic Impedance Mismatch**
- PLA's rigid, smooth surface caused sound wave **reflection** rather than **transmission**
- Contrasting mechanical properties between water-based solution and PLA hindered acoustic radiation force translation between mediums
- Resulted in incomplete force transfer and inconsistent tissue displacement

**4. Inconclusive Findings**
- Despite observing potential anisotropy trends, conclusive sinusoidal patterns were lacking
- Discrepancies between intended and actual acoustic behavior

## Technical Insights

### Material Properties Impact

- **PLA Surface Characteristics**: Rigidity and smoothness inadequate for mimicking biological tissue acoustic properties
- **Acoustic Impedance**: Critical mismatch between PLA fibers and surrounding medium (milk/cornstarch)
- **Force Transmission**: Mechanical properties contrast prevents efficient acoustic radiation force coupling

### B-Mode & Peak Displacement Imaging

- B-mode ultrasound successfully visualized phantom structure and selected imaging regions
- Peak displacement maps revealed spatial distribution of acoustic radiation force effects
- Visual differences between 5 mm and 15 mm transducer positioning demonstrated depth-dependent acoustic behavior

## Future Directions

### Phantom Redesign

- **Enhanced Acoustic Properties**: Utilize materials with improved sound transmissivity matching biological tissue
- **Alternative Materials**: Explore alternatives to PLA with better acoustic coupling
- **Impedance Matching**: Design materials with acoustic properties closer to tissue (speed of sound, impedance)

### Imaging & Analysis Methods

- **Gelatin-Based Phantoms**: Investigate improved gelatin formulations that minimize air artifacts
- **Alternative Modalities**: Integrate complementary imaging methods to validate anisotropy
- **Varying Young's Moduli**: Develop phantom series with different mechanical properties for comprehensive validation

### Protocol Optimization

- **Focal Depth Alignment**: Refine transducer positioning and material design to ensure peak displacement at intended focal depth
- **Angle Resolution**: Increase rotation angle increments for finer anisotropy characterization
- **Multi-Frequency Analysis**: Evaluate VisR imaging across broader frequency ranges

## Research Impact & Applications

This work contributes to:
- **Protocol Development**: Standardized phantoms for ultrasound anisotropy imaging validation
- **Clinical Translation**: Advancing noninvasive tissue characterization in musculoskeletal and oncology imaging
- **Biomedical Engineering**: Advancing tissue-engineering validation approaches
- **Precision Medicine**: Enabling new diagnostic biomarkers based on mechanical anisotropy

## Technical Skills Demonstrated

- **Ultrasound Engineering**: VisR imaging, ARFI methodology, transducer characterization
- **Image Processing**: B-mode visualization, peak displacement mapping, ROI analysis
- **Phantom Fabrication**: 3D printing, material selection, experimental design
- **Signal Processing**: Acoustic radiation force analysis, displacement tracking
- **Data Analysis**: Quantitative metrics, angle-dependent characterization, trend analysis
- **Problem-Solving**: Systematic troubleshooting of acoustic impedance issues

## Lessons Learned

1. **Material Selection Critical**: Acoustic properties must be carefully matched to tissue characteristics
2. **Impedance Matching Essential**: Successful force transmission requires appropriate acoustic coupling
3. **Rigorous Validation Needed**: Phantom behavior may diverge from theoretical predictions
4. **Iterative Design Process**: Multiple prototype iterations necessary for optimal performance

## Files Included

- **Abrams_Scholar_Poster_51.pdf**: Research poster with complete methodology and results
- **Slides_of_Anisotropy_Phantoms_for_Varsha.pdf**: Detailed presentation slides with imaging comparisons
- **anisotropyGraph_phantomInCornstarch.fig**: MATLAB analysis of cornstarch phantom anisotropy data
- **anisotropyResults_phantomInMilk.fig**: MATLAB analysis of milk phantom anisotropy data

### Data Availability Note

The MATLAB analysis scripts and code used for signal processing and data visualization were developed on a university research desktop computer that is no longer accessible. While the original MATLAB source files (.m files) are unavailable, the analysis results are preserved in the `.fig` files, which contain the processed data and visualizations. Researchers with MATLAB can open and examine these `.fig` files to view the complete analysis pipeline and results. Future work would require reimplementation of the signal processing algorithms based on the methodology described in this README and the original poster.

## References

[1] M.M. Hossain and C.M. Gallippi, "Electronic point spread function rotation using a three-row transducer for ARFI-based elastic anisotropy assessment: in silico and experimental demonstration," *IEEE Transactions on Ultrasonics, Ferroelectrics, and Frequency Control*, vol. 68, no. 3, pp. 636-646, 2017.

## Acknowledgments

Special thanks to:
- **Dr. Caterina M. Gallippi** for research mentorship, guidance, and laboratory access
- **J. Aidan Armstrong and Sabiq Muhtadi** for collaborative research support
- **Abrams Scholarship Program** for funding and institutional support
- **UNC Chapel Hill & NC State Joint BME Department** for facilities and resources
