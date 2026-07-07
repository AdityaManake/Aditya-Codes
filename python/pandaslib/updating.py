import pandas as pd
data={
    "Name":["Aditya","Heavelight","Sahil"],
    "Age":[17,25,18],
    "Salary":[25,32,30]
}
df=pd.DataFrame(data)
print(data)
#df.loc[row_index, "Column name",]= new value
df.loc[1,"Age"]= 19
print(df)

df['Salary']=df["Salary"]*0.5
print(df)

#removing columns
df.drop(columns=["Age"],inplace=True)
print(df)
