import pandas as pd
data={

    "Name":["Aditya","Manas","Geet","Pranav","Sahil"],

    "Age":[None,22,None,21,22],

    "CGPA":[8.7,None,8.3,8.4,None]

}
df=pd.DataFrame(data)
print("Orignal DataFrame")
print(df)
print(df.isnull().sum())
df['Age'] = df['Age'].fillna(df['Age'].mean())
df['CGPA'] = df['CGPA'].fillna(df['CGPA'].mean())
print(df)