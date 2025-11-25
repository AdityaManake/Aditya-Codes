'''
Main Types of Encoding
1. Lablel Encoding
2. One Hot Encoding
'''
from sklearn.preprocessing import LabelEncoder
import pandas as pd
data={
    "Name":["Aditya","Manas","Geet","Tanvi","Pranav","Sahil","Sarah"],
    "Age":[None,22,None,21,22,20,21],
    "Hobby":["Gaming","Coding","Coding","Gaming","Coding","Coding","Gaming"],
    "CGPA":[8.7,None,8.3,8.4,None,9.0,8.5],
    "Gender":["Male","Male","Female","Male","Male","Male","Female"]
}
df=pd.DataFrame(data)
print(df)
print(df.isnull().sum())
df['Age']=df['Age'].fillna(df['Age'].mean())
df['CGPA']=df['CGPA'].fillna(df['CGPA'].mean())
print(df)       
le=LabelEncoder()
df['Gender_encoded']=le.fit_transform(df['Gender'])
df['Hobby_encoded']=le.fit_transform(df['Hobby'])
print("\nLabel Encoded data\n")
print(df[['Gender','Gender_encoded','Hobby','Hobby_encoded']])