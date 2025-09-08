n=int(input("Enter the number:"))
orignal=n
reversed=0
while n>0:
    r=n%10
    reversed=reversed*10+r
    n=n//10
if orignal==reversed:
    print("The number is palindrome")
else:
    print("The number is not palindrome")