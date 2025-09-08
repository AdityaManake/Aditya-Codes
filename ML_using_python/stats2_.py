import numpy as np
dataset=[1,2,3,4,5,6,7,8,9,10]
range=max(dataset)-min(dataset) #no library function
variance=np.var(dataset)
std_deviation=np.std(dataset)
mean=np.mean(dataset)
mean_deviation=np.mean(np.abs(dataset-mean))
print("Range:",range)
print("Variance:",variance)
print("Standard Deviation:",std_deviation)
print("Mean Deviation:",mean_deviation)
#without using library functions
def range():
    return max(dataset)-min(dataset)
def variance():
    n=len(dataset)
    mean=sum(dataset)/n
    squared_diff=[(x-mean)**2 for x in dataset]
    return sum(squared_diff)/n
def std_deviation():
    return np.sqrt(variance())
def mean_deviation():
    mean=sum(dataset)/len(dataset)
    abs_diff=[abs(x-mean) for x in dataset]
    return sum(abs_diff)/len(dataset)
print("Range:",range())
print("Variance:",variance())
print("Standard Deviation:",std_deviation())
print("Mean Deviation:",mean_deviation())