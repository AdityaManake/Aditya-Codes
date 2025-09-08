import pandas as pd
data = {
    "Array":[1, 2, 3, 4, 5, 1, 2, 3, 6]
}
df=pd.DataFrame(data)
frequency=df.value_counts()
sorted_frequency = frequency.sort_index()
print(frequency)
cumulative_frequency = 0
cumulative_frequency += sorted_frequency.cumsum()
print(cumulative_frequency)

