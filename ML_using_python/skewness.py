import statistics as stats
data=[10, 20, 30, 10, 60, 20, 80, 90, 10]
mean=stats.mean(data)
median=stats.median(data)
std=stats.stdev(data)
skewness=(3*(mean-median))/std
print(f"Mean of data is: {mean}")
print(f"Median of data is: {median}")
print(f"Standard Deviation of data is: {std}")
print(f"Skewness of data is: {skewness}")