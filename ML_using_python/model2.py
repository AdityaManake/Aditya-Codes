import pandas as pd
import numpy as np
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import accuracy_score
from sklearn.preprocessing import LabelEncoder
iris_df = pd.read_csv('D:/Programs/ML_using_python/iris_dataset.csv')
iris_df = iris_df.dropna()
x = iris_df.drop(columns='species')
y = iris_df['species']
x_train, x_test, y_train, y_test= train_test_split(x,y, test_size=0.2, random_state=42)
scalar=StandardScaler()
x_train_scaled=scalar.fit_transform(x_train)
x_test_scaled=scalar.transform(x_test)
model=LogisticRegression(solver='liblinear', penalty='l2')
model.fit(x_train_scaled,y_train)
y_pred=model.predict(x_test_scaled)
accuracy=accuracy_score(y_test,y_pred)
print("Accuracy:",accuracy)
new_data=pd.DataFrame([[5.1,3.5,1.4,0.2],
                  [6.3,2.9,5.6,1.8],
                  [1.2,99.3,0.4,69.2]],columns=x.columns)
new_data=scalar.transform(new_data)
predictions=model.predict(new_data)
print("Predictions:",predictions)