n=int(input("Enter number of array elements:"))
arr=[]
for i in range(n):
    element=int(input(f"Enter element {i+1}:"))
    arr.append(element)
skip=int(input("Enter the element you want to skip: "))
for i in arr:
    if i==skip:
        continue
    print(i)