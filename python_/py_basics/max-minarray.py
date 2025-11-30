n=int(input("Enter number of array elements:"))
arr=[]
print("Enter array elements\n")
for x in range(n):
    element=int(input(f"Enter element {x+1}:"))
    arr.append(element)
maximum=arr[0]
minimum=arr[0]
for x in range(1,n):
    if(arr[x]>maximum):
        maximum=arr[x]
    if(arr[x]<minimum):
        minimum=arr[x]
index=arr.index(maximum)
index2=arr.index(minimum)
print("Maximum number in array ",maximum,"found at index",index)
print("Minimum number in array ",minimum,"found at index",index2)