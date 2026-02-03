import pandas as pd 
import matplotlib.pyplot as plt
import seaborn as sns
data=pd.read_csv(r"D:\Programs\ML_using_python\Data_Preprocessing\spotify_dataset.csv")
df=pd.DataFrame(data)
print(df.shape)
print(df.columns)
df=df.drop("Unnamed: 0",axis=1)
print(df.isna().sum())
print(df.loc[df["artists"].isna()])
print(df.duplicated(keep=False).sum())
print(df.loc[df["track_id"].duplicated(keep=False)].sort_values("track_id"))