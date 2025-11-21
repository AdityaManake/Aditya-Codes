arr=[52,63,24,15,78,34,89,12]
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr
print("Unsorted array:", arr)
print("Sorted array:", bubble_sort(arr))