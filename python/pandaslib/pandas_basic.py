import pandas as pd
data={
    "Name": ["Aditya","Pranav","Manas","Geet","Sahil","Heavenlight"],
    "Age":[10,20,30,40,50,60],
    "Marks":[50,60,70,80,90,100]
}
df=pd.DataFrame(data)
print(df)
print(df.describe())
print(f"shape: {df.shape}")
print(f"Column names: {df.columns}")