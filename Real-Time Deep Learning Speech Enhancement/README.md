# Speech Enhancement for Hearing-Impaired Patients Using Deep Learning and Real-Time Smartphone Deployment

**Research Project** | Abrams Scholars Program, Spring 2025  
**Authors**: Varsha Venkatapathy, Muhammad Pate, Arian Azarang, Virginie Papadopoulou  
**Institution**: Lampe Joint Department of Biomedical Engineering, UNC Chapel Hill & NC State University

---

## Project Overview

This project develops and evaluates deep learning models for real-time speech enhancement to support hearing-impaired patients in noisy environments. The work combines signal processing and neural network architectures to enable noise-suppression algorithms deployable on smartphones as accessible hearing-aid enhancements.

---

## Motivation

Traditional hearing aids struggle to suppress background noise effectively, reducing speech intelligibility. This project investigates whether deep learning–based speech enhancement, optimized for mobile deployment, can provide clearer and more natural speech in everyday listening conditions.

---

## Technical Approach

### Signal Processing Pipeline
- **Input Processing**: Clean speech mixed with Babble, Traffic, and Machinery noise at SNRs of –5, 0, and 5 dB  
- **Feature Extraction**: STFT, FFT, Log-Power Spectrum  
- **Preprocessing**: Mel-filterbanks, magnitude/phase separation, normalization  
- **Dataset Size**: ~100,000 audio windows  
- **Split**: 70% training / 20% validation / 10% testing  

### Models Evaluated

| Model | Architecture | Key Features |
|-------|--------------|--------------|
| **CRNN** | CNN + RNN layers | Captures both frequency and temporal patterns |
| **CNN** | Multi-frame temporal stacking | Efficient for real-time enhancement |
| **RNN** | Basic RNN cells | Two-microphone sequential modeling |
| **FCNN** | Fully convolutional design | 2D Ideal Ratio Mask (IRM) prediction |

---

## Best Performing Model: CNN (Model 2)

**Architecture features**: Log-Power Spectrum + Log-Mel Filterbank inputs  

**Training Configuration**:
- Optimizer: Adam (learning rate 1×10⁻⁴)  
- Batch size: 4  
- Context window: 9 frames  
- Early stopping: epoch 12 of 15  

---

## Results

### Quantitative Performance
- **Training loss** reduced from ~0.75 → ~0.61  
- **PESQ** improved from ~1.5 → ~1.9  
- **STOI** improved from ~0.05 → ~0.08  

### Qualitative Results  
Spectrogram analysis shows effective noise removal while retaining clean speech structure.

---

## Model Code Availability and Repository Structure

During development, all preprocessing and model training were performed on a university research workstation. After project completion, only the **CNN model training notebook** was retained.

### This repository includes:
- **Full preprocessing workflows for all four models**  
  (`preprocessing/preprocessing_all_noise/`)  
- **Legacy preprocessing versions** (for documentation and reproducibility)  
- **Training code only for the CNN model**  
  (Model 2 from Article 2)  
- **All academic references used in the project** (located in the repository)

Training notebooks for CRNN, RNN, and FCNN were developed and tested but are not included due to loss of access to the workstation after the project period.

The existing preprocessing code fully documents the feature-generation pipelines described in the research articles and allows re-training of any model.

---

## Implementation & Deployment

- **Environment**: Jupyter Notebook (Windows 10)  
- **Hardware**:  
  - NVIDIA RTX 4090 (24 GB, 10,496 CUDA cores)  
  - Intel i9-10850K  
  - 128 GB RAM  
- **Mobile Deployment**: Real-time enhancement integrated into an Android prototype  
- **Frameworks**: TensorFlow / PyTorch  

---

## Technical Skills Demonstrated

- Signal processing: STFT, FFT, Mel-filterbanks  
- Deep learning: CNN, CRNN, RNN, FCNN  
- Audio engineering: noise suppression, real-time enhancement  
- Mobile optimization  
- Evaluation metrics: PESQ, STOI, MSE, MAE  

---

## Future Development

- Reduce model complexity for smartphone deployment  
- Train remaining models on additional hardware  
- Expand noise categories and environments  
- Conduct hearing-impaired user studies  
- Integrate with commercial hearing-aid applications  

---

## Key Findings

The CNN-based model demonstrated effective noise suppression and produced speech that is noticeably clearer and more natural. While intelligibility gains were moderate, results confirm the feasibility of functional, real-time speech enhancement for mobile devices. Additional training of CRNN, RNN, and FCNN architectures is planned to further improve performance.

---

## Broader Impact

This work supports the development of affordable, mobile-based hearing assistance technology—bringing real-time speech clarity to those who need it most and reducing cost barriers associated with conventional hearing aids.

---

## References

1. Shankar, N., Bhat, G. S., & Panahi, I. M. (2020). *Real-Time Single-Channel Deep Neural Network-Based Speech Enhancement on Edge Devices*.  
2. Bhat, G. S., Shankar, N., Reddy, C. K. A., & Panahi, I. M. (2019). *A Real-Time Convolutional Neural Network Based Speech Enhancement for Hearing Impaired Listeners Using Smartphone*. IEEE Access.  
3. Shankar, N., Bhat, G. S., & Panahi, I. M. (2020). *Efficient two-microphone speech enhancement using basic recurrent neural network cell for hearing and hearing aids.*  
4. Tu, Y.-H., Du, J., & Lee, C. (2020). *2D-to-2D Mask Estimation for Speech Enhancement Based on Fully Convolutional Neural Network.*

---

## Acknowledgments

Thank you to the Office of Undergraduate Research at UNC Chapel Hill and the Abrams Scholars Program for funding and support.


