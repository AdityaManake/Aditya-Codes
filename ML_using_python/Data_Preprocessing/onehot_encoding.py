import pandas as pd
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import LabelEncoder,OneHotEncoder
data=pd.read_csv(r"D:\Programs\ML_using_python\homeprices.csv")
df=pd.DataFrame(data)
df.columns=df.columns.str.strip()
le=LabelEncoder()
df.town=le.fit_transform(df.town)
print(df)
X=df.drop("price",axis=1)
y=df["price"]
ohe=OneHotEncoder(categorical_features=[0])
X=ohe.fit_transform(X).toarray()
print(X)
