# Fetal Ultrasound Image Denoising Using Lightweight Attention Networks

**Course**: BMME 575 - Practical Machine Learning  
**Project Type**: Replication Study & Implementation  
**Team**: Varsha Venkatapathy, Enakshi Chawla, Nalaya Girnuel, Matthew Wu, Zehao Wu  
**Institution**: University of North Carolina at Chapel Hill & NC State University, Joint Department of Biomedical Engineering

## Project Overview

This project replicates and evaluates the LAD-CNN (Lightweight Attention Denoise-Convolutional Neural Network) model for ultrasound image denoising, originally proposed by Shi et al. (2024). The work focuses on removing speckle noise from fetal head circumference ultrasound images while preserving critical anatomical details. We implement two model variations and compare them against BM3D, a state-of-the-art traditional denoising algorithm.

## Motivation

Ultrasound imaging is essential for clinical diagnosis due to its non-invasiveness, cost-effectiveness, and real-time capabilities. However, speckle noise—inherent granular interference caused by coherent ultrasound wave propagation—severely degrades image quality and obscures structural details, affecting diagnostic accuracy. This project explores deep learning approaches to suppress speckle noise while preserving anatomical features critical for medical diagnosis.

## Technical Approach

### Problem Formulation

**Speckle Noise Model**:
```
z = μ * n + μ
```
where μ represents the actual image and n is noise parameter (γ = 0.5 for fetal ultrasound).

### Proposed Architecture: LAD-CNN

The LAD-CNN combines two lightweight attention mechanisms with an encoder-decoder architecture:

**Encoder Stage**:
- Downsampling/pooling for feature extraction and edge detection
- Lightweight Channel Attention (LCA) block after pooling
- Emphasizes important feature channels while suppressing noise

**Decoder Stage**:
- Subpixel convolution for efficient upsampling
- Lightweight Large-Kernel Attention (LLA) block after upsampling
- Large kernel size captures relationships between distant pixels
- Skip connections prevent gradient vanishing

**Key Components**:
- **Activation Functions**: GELU (smooth nonlinearity), ReLU (efficiency), Sigmoid (normalization)
- **Loss Function**: Combined MSE (reconstruction) + Total Variation (artifact reduction)
- **Convolution Types**: Standard Conv2D, depthwise convolution with dilation, pointwise convolution

### Dataset

**Fetal Head Circumference Ultrasound Dataset**:
- Total: 1,334 images (800×540 px)
- Training: 999 images (augmented 5× → ~5,000 images)
- Test: 335 images
- Preprocessing: Resized to 128×128 px
- Data Augmentation: Random rotation, translation, flipping
- Validation: 25% of training data (~1,250 images)

### Evaluation Metrics

| Metric | Description | Formula |
|--------|-------------|---------|
| **PSNR** | Peak Signal-to-Noise Ratio | Pixel-by-pixel reconstruction error |
| **SSIM** | Structural Similarity Index | Brightness, contrast, structure similarity |
| **ENL** | Equivalent Number of Looks | Smoothness in homogeneous areas |

## Implementation Details

**Models Implemented**:
- **Model A**: Exact replication of LAD-CNN from original paper
- **Model B**: Alternative CNN-DAE variant with subpixel convolution and GELU activation
- **Baseline**: BM3D (Block-Matching and 3D Filtering)

**Training Configuration**:
- Optimizer: Adam (LR: 0.001, decay: 0.1 per 5 epochs)
- Batch size: 10 images
- Epochs: 120 (early stopping at 20 epochs)
- Loss function regularization weight: λ_TV = 0.002
- Hardware: NVIDIA GeForce 4060 GPU, Intel Iris Xe Graphics

## Results

### Quantitative Performance

**BM3D Baseline**:
- PSNR: 17.86–24.50 (noise level σ = 2-7)
- SSIM: 0.58–0.80
- Processing time: 1.45 seconds/image

**Model A (Exact LAD-CNN)**:
- PSNR: 12.30–15.77
- SSIM: 0.19–0.27
- Processing time: 0.08 seconds/image

**Model B (CNN-DAE Variant)**:
- PSNR: 15.56–15.85
- SSIM: 0.26–0.28
- Processing time: 0.08 seconds/image
- More consistent across noise levels

### Key Findings

1. **Processing Speed**: LAD-CNN variants (~0.08s) significantly faster than BM3D (1.45s)
2. **Performance Trade-off**: BM3D superior in PSNR/SSIM but causes over-smoothing; LAD-CNN variants maintain consistency across noise levels
3. **Model Stability**: Model B more robust than Model A despite higher parameter count (795,393 vs. 504,793)
4. **Subpixel Convolution**: Critical for preserving spatial details in upsampling stages

### Visual Results

- **BM3D**: Effective noise reduction but significant texture loss
- **Model A**: Unstable outputs (black/gray boxes) due to architecture reconstruction issues
- **Model B**: Better visual coherence with color inversion and over-smoothing artifacts

## Technical Skills Demonstrated

- **Signal Processing**: Speckle noise modeling, frequency domain analysis
- **Deep Learning**: Convolutional neural networks, autoencoders, attention mechanisms
- **Medical Imaging**: Ultrasound preprocessing, noise characterization, image quality assessment
- **Model Optimization**: Hyperparameter tuning, loss function design, architecture variants
- **Comparative Analysis**: Quantitative metrics, qualitative evaluation, ablation studies

## Challenges & Insights

### Implementation Challenges

1. **Incomplete Documentation**: Original LAD-CNN paper lacked detailed layer configurations
2. **Ambiguity**: Mismatches between textual descriptions and architectural figures
3. **Reproducibility**: Absence of open-source code hindered faithful replication
4. **Hyperparameter Details**: Insufficient specification of training strategies and filter numbers

### Key Learnings

- Importance of robust documentation for deep learning reproducibility
- Trade-offs between model complexity and real-world deployment
- Significance of architectural details (subpixel convolution, skip connections)
- Value of comparative baselines (BM3D) for validation

## Files Included

- **Final_Delivery_Code.ipynb**: Complete implementation with models A, B, and BM3D
- **Final_Delivery_Presentation.pptx**: Results summary and architecture diagrams
- **Final_Report.docx**: Comprehensive technical report with detailed analysis

## Future Work

- Simplified, well-documented architectures for improved reproducibility
- Alternative attention mechanisms (spatial attention, transformers)
- Hybrid approaches combining BM3D preprocessing with deep learning
- Clinical validation with radiologist evaluation
- Extension to other ultrasound modalities

## References

[1] Shi, L., Di, W., & Liu, J. (2024). "Ultrasound image denoising autoencoder model based on lightweight attention mechanism." *Quantitative Imaging in Medicine and Surgery*, 14(5), 3557-3571.

[2] Van den Heuvel, T. L., de Bruijn, D., de Korte, C. L., & Ginneken, B. V. (2018). "Automated measurement of fetal head circumference using 2D ultrasound images." *PLoS ONE*, 13, e0200412.

## Acknowledgments

Special thanks to Professor Arian Azarang for guidance and support throughout this project, and to the Joint Department of Biomedical Engineering at UNC Chapel Hill & NC State for resources and collaboration.
