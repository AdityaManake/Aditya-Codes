import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression  
import numpy as np
from sklearn.preprocessing import StandardScaler    
from sklearn.metrics import confusion_matrix
data=pd.read_csv(r"D:\Programs\ML_using_python\HR_comma_sep.csv") 
df=pd.DataFrame(data)
df.columns=df.columns.str.strip()
df=df.drop("Department",axis=1)
df=pd.get_dummies(df,columns=["salary"],dtype=int)
df=df.drop("salary_medium",axis=1)
X=df.drop("left",axis=1)
y=df["left"]
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)
X_train,X_test,y_train,y_test=train_test_split(X_scaled,y,test_size=0.1,random_state=0)
print(X_test[:10])
model=LogisticRegression(max_iter=1000,class_weight="balanced")
model.fit(X_train,y_train)
predicted=model.predict(X_test)
print(predicted[:20])      # first 20
print(predicted[-20:])     # last 20
print(np.unique(predicted, return_counts=True))
print(model.score(X_test,y_test))
print(confusion_matrix(y_test, predicted))

