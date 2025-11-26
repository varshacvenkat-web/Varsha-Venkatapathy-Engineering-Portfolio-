# Speech Enhancement for Hearing-Impaired Patients Using Deep Learning and Real-Time Smartphone Deployment

**Research Project** | Abrams Scholars Program, Spring 2025  
**Authors**: Varsha Venkatapathy, Muhammad Patel, Arian Azarang, Virginie Papadopoulou  
**Institution**: Lampe Joint Department of Biomedical Engineering, UNC Chapel Hill & NC State University

## Project Overview

This research project develops and evaluates deep learning models for real-time speech enhancement to assist hearing-impaired patients in noisy environments. The work bridges signal processing and neural networks to deploy noise-suppression algorithms directly on smartphones, enabling accessible hearing aid solutions.

## Motivation

Conventional hearing aids struggle to suppress background noise effectively, reducing speech intelligibility for users. This project explores deep learning-based speech enhancement deployed on mobile devices to provide real-time, personalized noise reduction.

## Code Availability

Due to access limitations on my former university lab workstation
(where the models were originally trained), this repository currently
includes only the full preprocessing pipeline (data generation,
noise mixing, and feature extraction) and project documentation
(poster, references, and results summary).

The CRNN, CNN, RNN, and FCNN training notebooks are described in the
Methods and Results sections and can be re-implemented directly from
the cited papers.


## Technical Approach

### Signal Processing Pipeline
- **Input Processing**: Clean speech mixed with Babble, Traffic, and Machinery noise at SNRs of -5, 0, and 5 dB
- **Feature Extraction**: STFT (Short-Time Fourier Transform), FFT, Log-Power Spectral analysis
- **Preprocessing**: Mel-filterbank analysis, magnitude/phase separation, normalization
- **Dataset**: 70/20/10 train/validation/test split on ~100k audio windows

### Models Evaluated

| Model | Architecture | Key Features |
|-------|-------------|--------------|
| **CRNN** | Convolutional + Recurrent Layers | Temporal pattern modeling for real-time enhancement |
| **CNN** | Frame Segmentation + Temporal Stacking | Efficient noise suppression via convolutional layers |
| **RNN** | Sequential Recurrent Layers | Dual-microphone input processing |
| **FCNN** | Fully Convolutional Network | 2D Ideal Ratio Mask estimation from Log-Power Spectrum |

### Best Performing Model: CNN

**Architecture**: Log-Power Spectral + Log-Mel Filterbank Features

**Training Configuration**:
- Optimizer: Adam (learning rate: 1×10⁻⁴)
- Batch size: 4 (on ~100k windows)
- Context window: 9 frames
- Early stopping: Epoch 12/15

## Results

### Quantitative Performance

**Loss Metrics** (MSE/MAE):
- Training loss improved from ~0.75 → ~0.61
- Indicates tighter reconstruction of clean log-power spectra

**Perceptual Quality (PESQ)**:
- Improved to ~1.9/4.5 (baseline: ~1.5)
- Delivers noticeably clearer, more natural speech

**Intelligibility (STOI)**:
- Rose to ~0.08/1.0 (baseline: ~0.05)
- Modest but consistent gain in speech intelligibility

### Qualitative Results

Time-frequency spectrograms demonstrate effective noise suppression while preserving speech characteristics.

## Implementation & Deployment

- **Development Environment**: Jupyter Notebook on Windows 10
- **Hardware**: NVIDIA GeForce RTX 4090 GPU (24 GB, 10,496 CUDA cores), Intel i9-10850K CPU, 128 GB RAM
- **Deployment**: Real-time speech enhancement on Android smartphone app
- **Frameworks**: TensorFlow/PyTorch for model training and inference

## Technical Skills

- **Signal Processing**: STFT, FFT, spectral analysis, mel-filterbanks
- **Deep Learning**: CNN, RNN, CRNN architectures, attention mechanisms
- **Audio Processing**: Speech enhancement, noise suppression, real-time inference
- **Mobile Development**: Smartphone deployment optimization
- **Evaluation Metrics**: PESQ, STOI, MSE, MAE

## Future Development

- Optimize CNN for reduced memory and computational requirements for mobile deployment
- Expand testing to broader noise types and acoustic environments
- Conduct user studies with hearing-impaired individuals
- Integrate with existing hearing aid hardware and apps
- Train models on higher-memory devices with increased batch sizes and epochs to improve STOI

## Key Findings

The attention-CNN model reliably reduces noise, yielding clearer and more natural speech with modest intelligibility gains. This demonstrates the feasibility of deep learning-based speech enhancement for real-world hearing aid applications. Further training on remaining models (CRNN, RNN, FCNN) is ongoing to optimize performance.

## Broader Impact

This research aims to democratize hearing aid technology by enabling affordable, real-time speech enhancement on consumer smartphones, improving quality of life for hearing-impaired individuals in diverse acoustic environments.

## References

1. Shankar, N., Bhat, G. S., & Panahi, I. M. (2020). "Real-Time Single-Channel Deep Neural Network-Based Speech Enhancement on Edge Devices." *PubMed Central*.

2. Bhat, G. S., Shankar, N., Reddy, C. K. A., & Panahi, I. M. (2019). "A Real-Time Convolutional Neural Network Based Speech Enhancement for Hearing Impaired Listeners Using Smartphone." *IEEE Access*, 7, 78421–78433.

3. Shankar, N., Bhat, G. S., & Panahi, I. M. (2020). "Efficient two-microphone speech enhancement using basic recurrent neural network cell for hearing and hearing aids." *Vol. 148(1)*, 389–400.

4. Tu, Y.-H., Du, J., & Lee, C. (2020). "2D-to-2D Mask Estimation for Speech Enhancement Based on Fully Convolutional Neural Network."

## Acknowledgments

Office of Undergraduate Research (OUR) at UNC Chapel Hill and the BME Abrams Scholars Program at UNC Chapel Hill and NC State University for funding and support.
