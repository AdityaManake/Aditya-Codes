import pandas as pd
data={
    "Name":["Aditya","Heavelight","Sahil"],
    "Age":[17,25,18],
    "Salary":[25,32,30]
}
df=pd.DataFrame(data)
print(df)
df["Bonus"] = df ['Salary'] * 0.1
print(df)

#using insert function
df.insert(4,"Marks",[27,24,22])
print(df)