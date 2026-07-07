import pandas as pd
data={
    "Array":[1,6,3,2,4,5]
}
df=pd.DataFrame(data)
frequency=df["Array"].value_counts()
print("Normal frequency:",frequency)
sorted_frequency=frequency.sort_index()
print("Sorted frequency:",sorted_frequency)
cumulative_frequency=0
cumulative_frequency=sorted_frequency.cumsum()
print("Cumulative frequency:",cumulative_frequency)