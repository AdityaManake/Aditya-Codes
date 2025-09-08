import pandas as pd
data = {
    "name": ["Alice", "Bob", "Charlie", "David"],
    "age": [25, 30, 35, 40],
}
df=pd.DataFrame(data)
print(df.head(2))
print(df.tail(2))
print(df.describe())