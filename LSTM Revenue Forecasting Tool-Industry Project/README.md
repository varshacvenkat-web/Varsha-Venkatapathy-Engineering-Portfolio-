# LSTM Revenue Forecasting Tool

Semiconductor Industry Project - 
*Varsha Venkatapathy & Harini Gurusankar*

---

## Project Overview

Developed a Long Short-Term Memory (LSTM) deep learning model to forecast quarterly revenue in the semiconductor industry. The tool automates revenue predictions for annual planning and long-range strategic planning, replacing manual forecasting methods with a data-driven machine learning approach.

### Key Features

- **Multi-Quarter Forecasting**: Predicts 3 quarters ahead using 16 quarters of historical data
- **Deep Learning Architecture**: 3-layer LSTM network with 64 hidden units per layer
- **High Accuracy**: Achieves low normalized MSE (0.0020) on test data
- **Production Deployment**: Interactive GUI built with Streamlit for real-time forecasting
- **Automated Preprocessing**: Handles data normalization, sequence generation, and feature engineering

---

## Technical Approach

### Model Architecture

**Input**: 16 quarters of historical data (revenue + product family)  
**Architecture**: 3-layer LSTM (64 units each) + Fully Connected Layer  
**Output**: 3-quarter revenue forecast  
**Framework**: PyTorch

### Key Components

- **Data Preprocessing**: Min-Max normalization, sliding window sequence generation
- **Feature Engineering**: Combines temporal revenue patterns with categorical product information
- **Training**: Adam optimizer, MSE loss, 70/20/10 train/val/test split
- **Deployment**: Streamlit GUI for CSV upload and real-time predictions

---

## Results

- **Normalized MSE**: 0.0020 on test set
- Successfully captures non-linear trends and seasonal patterns
- Smooth convergence with minimal overfitting
- Strong alignment between predicted and actual revenue

---

## Repository Structure

LSTM-Revenue-Forecasting/
├── Presentation.pptx          # Bay Area Innovation Day pitch
├── Poster.pptx               # Technical poster presentation
├── lstm-model.ipynb          # Code and model implementation
└── README.md

**Note**: Proprietary data has been excluded to protect company confidentiality. 

---

## Technologies Used

**Machine Learning**
- PyTorch (LSTM implementation)
- scikit-learn (preprocessing)
- NumPy, Pandas (data manipulation)

**Deployment**
- Streamlit (GUI interface)
- Matplotlib (visualization)

---

## Skills Demonstrated

- Time series forecasting and sequence modeling
- LSTM/RNN neural network architecture
- PyTorch deep learning framework
- Data preprocessing and feature engineering
- Model deployment with interactive GUI
- Business application of machine learning

---

## Acknowledgments

Completed during a industry engineering job in the semiconductor sector. Special thanks to **Harini Gurusankar** for collaboration and to our industry mentors for guidance.

---

*Industry  Project - Summer 2025*  
*Proprietary data removed to protect confidentiality*
