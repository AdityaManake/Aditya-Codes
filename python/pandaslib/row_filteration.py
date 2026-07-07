import pandas as pd
data={
    "Name": ["Aditya","Pranav","Manas","Geet","Sahil","Heavenlight"],
    "Age":[10,20,30,40,50,60],
    "Salary":[50000,60000,70000,80000,90000,100000],
    "Duration":[70,80,50,30,60,10]
}
df=pd.DataFrame(data)
#filtering based on single condition
high_salary= df[df['Salary']<70000]
print(high_salary)
#filtering based on multiple conditions
filtered = df[(df["Age"] > 30) & (df["Salary"] > 70000)]
print(filtered)
#Using or condition
filtered2 = df[(df["Duration"] > 30) | (df["Salary"] > 70000)]
print(filtered2)