# Preprocessing for Speech Enhancement (All Models)

This directory contains the final preprocessing workflows used to generate noisy/clean speech pairs for the four deep-learning speech-enhancement models implemented in this project. These notebooks follow the data-processing pipelines described in the referenced research articles.

---

## Folder Structure

```
preprocessing_all_noise/
│
├── CRNN Model.ipynb
├── CNN Model.ipynb
├── RNN Model.ipynb
├── FCNN Model.ipynb
│
└── legacy_split_noise/
```

---

## Final Preprocessing Pipelines (Used in All Experiments)

These notebooks provide the cleaned and unified preprocessing workflow for each published model.

### 1. CRNN Model Preprocessing — Article 1 (2020)
Notebook: `CRNN Model.ipynb`  
Pipeline:
- Short-Time Fourier Transform (STFT)  
- Magnitude spectrum extraction  
- Normalization  
- Reshaping into 2D matrices for CRNN input  

### 2. CNN Model Preprocessing — Article 2 (2019)  
Notebook: `CNN Model.ipynb`  
Pipeline:
- Frame segmentation  
- FFT  
- Log-power spectrum extraction  
- Mel-filterbank computation  
- Temporal frame concatenation  
- Normalization  

### 3. RNN Model Preprocessing — Article 3 (2020)  
Notebook: `RNN Model.ipynb`  
Pipeline:
- 16 ms framing with 50% overlap  
- STFT  
- Real and imaginary component extraction  
- Vector concatenation  
- Normalization for RNN input  

### 4. FCNN Model Preprocessing — Article 4 (2020)  
Notebook: `FCNN Model.ipynb`  
Pipeline:
- STFT  
- Log-power spectrum computation  
- Normalization  
- Reshaping into 2D matrices  
- Ideal Ratio Mask (IRM) formatting for fully convolutional processing  

These workflows represent the complete, paper-aligned preprocessing pipeline used in the final results.

---

## legacy_split_noise/ (Deprecated Preprocessing)

This folder contains earlier preprocessing versions created before the workflows were unified.

### Purpose of the legacy version:
- Noise datasets were originally split across multiple files  
- Feature generation occurred in several separate notebooks  
- Noise merging and formatting were done manually  
- Some versions were exploratory and used during early project development  

### Why it is deprecated:
The updated unified preprocessing:
- Is cleaner, consistent, and easier to maintain  
- Matches the published article architectures precisely  
- Produces standardized feature shapes  
- Ensures consistent noise mixing and STFT parameters  
- Reflects the preprocessing used in all final experiments and deployment tests  

This folder is retained only for documentation and reproducibility.

---

## Purpose of This Directory

This preprocessing directory documents how:
- Noisy/clean feature pairs were generated  
- Each model’s required input format was constructed  
- Data preparation was standardized across CRNN, CNN, RNN, and FCNN architectures  
- The project supports real-time inference on smartphones  

All feature generation for model training and evaluation begins here.

