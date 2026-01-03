import pandas as pd
import numpy as numpy
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score,mean_absolute_error,mean_squared_error
data={
    "Area":[2600,3000,3200,3600,4000],
    "Bedrooms":[3,4,2,4,5],
    "Price":[550000,565000,610000,680000,725000],
    "Age":[20,15,20,3,5]
}
df=pd.DataFrame(data)
print(df)
X=df[["Area","Bedrooms","Age"]]
y=df["Price"]
model=LinearRegression()    
model.fit(X,y)
print(model.coef_)
print(model.intercept_)
test=pd.DataFrame([[3000,3,40]],columns=["Area","Bedrooms","Age"])
print(model.predict(test))
print(r2_score(y,model.predict(X)))
print(mean_absolute_error(y,model.predict(X)))
print(mean_squared_error(y,model.predict(X)))