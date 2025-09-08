n=int(input("Enter number of array elements:"))
arr=[]
for i in range(n):
    num=int(input(f"Enter element {i+1}:"))
    arr.append(num)
sorted_arr=sorted(arr)
sorted_arr2=sorted(arr, reverse=True)
print("--------Orignal Array--------\n")
print(arr)
print("-------Array sorted in Ascending order-------\n")
print(sorted_arr)
print("-------Array sorted in Descending order-------\n")
print(sorted_arr2)
x=int(input("Enter element you want to search:"))
idx=arr.index(x)
if x in arr:
    print(f"{x} found in array at index {idx}")
else:
    print(f"{x} not found in array")

