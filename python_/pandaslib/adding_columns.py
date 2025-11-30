import pandas as pd
data={
    "Name": ["Aditya","Pranav","Manas","Geet","Sahil","Heavenlight"],
    "Age":[10,20,30,40,50,60],
    "Salary":[50000,60000,70000,80000,90000,100000],
    "Duration":[70,80,50,30,60,10]
}
df=pd.DataFrame(data)
print(df)
df['Bonus']=df['Salary']*0.1
print(df)
#using insert
df.insert(0,"ID",[101,102,103,104,105,106])
print(df)