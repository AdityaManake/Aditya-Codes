#using inbuild functions
import numpy as np
import statistics as stats
data=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
mean=stats.mean(data)
median=np.median(data)
mode=stats.mode(data)
percentile=np.percentile(data, 75)
print("Mean:",mean)
print("Median:",median)
print("Mode:",mode)
print("Percentile:",percentile)

#without using inbuild option
data2 = [5, 6, 8, 9, 32, 76, 21]

mean2 = sum(data2) / len(data2)
print("Mean:", mean2)


def findin_length():
    length = 0
    for _ in data2:
        length += 1
    return length


def sort_data():
    arr = data2.copy()  
    n = len(arr)
    for i in range(n):
        for j in range(0, n - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr


def find_median():
    sorted_data = sort_data()
    n = len(sorted_data)
    if n % 2 == 1:  
        return sorted_data[n // 2]
    else:           
        mid1 = sorted_data[(n // 2) - 1]
        mid2 = sorted_data[n // 2]
        return (mid1 + mid2) / 2

print("Median:", find_median())

def find_mode():
    frequency = {}
    for i in data2:
        frequency[i] = frequency.get(i, 0) + 1
    max_frequency = max(frequency.values())
    modes = [key for key, value in frequency.items() if value == max_frequency]
    return modes

print("Mode:", find_mode())


def find_percentile(p=75):
    sorted_data = sort_data()
    n = len(sorted_data)
    rank = (p / 100) * (n + 1) 
    
    if rank.is_integer():
        return sorted_data[int(rank) - 1]  
    else:
        k = int(rank)  
        d = rank - k
        return sorted_data[k - 1] + d * (sorted_data[k] - sorted_data[k - 1])  

print("75th Percentile:", find_percentile(75))
