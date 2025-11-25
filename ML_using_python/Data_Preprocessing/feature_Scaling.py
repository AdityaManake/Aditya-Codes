from sklearn.preprocessing import StandardScaler,MinMaxScaler
from sklearn.model_selection import train_test_split    
import pandas as pd
scaler=StandardScaler()
X_scaled=scaler.fit_transform()
scaler=MinMaxScaler()
X_scaled=scaler.fit_transform()

