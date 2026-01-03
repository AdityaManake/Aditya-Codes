import pandas as pd
from sklearn.linear_model import LinearRegression   
data=pd.read_csv(r"D:\Programs\ML_using_python\homeprices.csv")
df=pd.DataFrame(data)
df.columns=df.columns.str.strip()
df=pd.get_dummies(df,columns=["town"],dtype=int)
df=df.drop("town_west windsor",axis=1)
print(df)
X=df.drop("price",axis=1)
y=df["price"]
model=LinearRegression()
model.fit(X,y)
input1 = pd.DataFrame([[2800, 0, 1]], columns=X.columns)
input2 = pd.DataFrame([[3400, 0, 0]], columns=X.columns)
print(model.predict(input1))
print(model.predict(input2))
print(model.score(X,y))