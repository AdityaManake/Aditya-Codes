import pandas as pd
df=pd.DataFrame({
    "A":[1,2,3,4,5],
    "B":[6,7,8,9,10],
    "C":[11,12,13,14,15],
    "D":[16,17,18,19,20]
})
print(df.prod(axis=1))