import pandas as pd 
from sklearn.preprocessing import LabelEncoder
import matplotlib.pyplot as plt
data=pd.read_csv(r"D:\Programs\ML_using_python\Data_Preprocessing\preprocessing_data.csv",na_values=["-"])
data.columns=data.columns.str.strip()
df=pd.DataFrame(data)
cols=["name","city"]
df=df.drop(columns=cols,axis=1)
df[["age", "cgpa"]] = df[["age", "cgpa"]].fillna(df[["age", "cgpa"]].mean())
df=df.dropna(subset=["gender","profession"])
print(df.isnull().sum())
le=LabelEncoder()
df["gender"]=le.fit_transform(df["gender"])
df["profession"]=le.fit_transform(df["profession"])
plt.scatter(df["cgpa"],df["placed"],cmap="viridis")
plt.xlabel("CGPA")
plt.ylabel("Placed")
plt.show()  
