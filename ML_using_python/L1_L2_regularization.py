import pandas as pd
import matplotlib.pyplot as plt 
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.linear_model import Lasso
from sklearn.model_selection import cross_val_score
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler
from sklearn.linear_model import Ridge
data=pd.read_csv(r"D:\Programs\ML_using_python\Melbourne_housing_FULL.csv")
cols=['Date','Postcode','YearBuilt','Lattitude','Longtitude']
df=pd.DataFrame(data)
df.drop(columns=cols,inplace=True)
df.drop_duplicates(inplace=True)
cols_tofillwith_zero=['Car','Propertycount','Bedroom2','Bathroom','Distance']
df[cols_tofillwith_zero]=df[cols_tofillwith_zero].fillna(0)
df.drop(columns=['Address'],inplace=True)
df['Landsize']=df['Landsize'].fillna(df['Landsize'].mean())
df['BuildingArea']=df['BuildingArea'].fillna(df['BuildingArea'].mean())
df.dropna(inplace=True)
df=pd.get_dummies(df,drop_first=True,dtype=int)
X=df.drop(columns='Price',axis=1)
y=df['Price']
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.3,random_state=2)

models = {

    "LinearRegression": Pipeline([
        ('scaler', StandardScaler()),
        ('model', LinearRegression())
    ]),

    "Lasso": Pipeline([
        ('scaler', StandardScaler()),
        ('model', Lasso(alpha=50, max_iter=1000, tol=0.1))
    ]),

    "Ridge": Pipeline([
        ('scaler', StandardScaler()),
        ('model', Ridge(alpha=50, max_iter=1000, tol=0.1))
    ])
}

for name, pipe in models.items():

    pipe.fit(X_train, y_train)
    score = pipe.score(X_test, y_test)

    print(f"{name}: {score:.4f}")