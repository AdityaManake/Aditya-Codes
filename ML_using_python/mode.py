#variance
def variance(dataset):
        l=len(dataset)
        mean=sum(dataset)/l
        var=0
        var=[(x-mean)**2 for x in dataset]
        return sum(var)/l
dataset=[5, 6, 8, 9, 5, 32, 76, 21, 5]
print("Variance:",variance(dataset))
import numpy as np
def standard_deviation(dataset):
    print("Standard deviation:",np.sqrt(variance(dataset)))
standard_deviation(dataset)


def mean_deviation(dataset):
    mean=sum(dataset)/len(dataset)
    abs_diff=[abs(x-mean)for x in dataset]
    return sum(abs_diff)/len(dataset)