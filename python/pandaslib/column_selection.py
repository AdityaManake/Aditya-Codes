'''
1.select specific column
2.filter rows
3.combine multiple conditions
'''
import pandas as pd
data={
    "Name": ["Aditya","Pranav","Manas","Geet","Sahil","Heavenlight"],
    "Age":[10,20,30,40,50,60],
    "Salary":[50000,60000,70000,80000,90000,100000],
    "Duration":[70,80,50,30,60,10]
}
df=pd.DataFrame(data)
print(df )
#Selecting single column
name = df["Name"]
print(name)
#selecting multiple columns
subset = df[["Name","Age"]]
print(subset)