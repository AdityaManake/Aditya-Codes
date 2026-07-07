n=int(input("Enter number of array elements:"))
arr=[n]
print("Enter array elements:\n")
for x in range(n):
    element=int(input(f"Enter element {x+1}:"))
    arr.append(element)
maximum=max(arr)
minimum=min(arr)
index=arr.index(maximum)
index2=arr.index(minimum)
print("Maximum number in array",maximum,"found at index",index)
print("Minimum number in array",minimum,"found at index",index2)