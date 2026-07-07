arr=[1,2,3,4,5,6]
total_outcomes=len(arr)
a=0
b=0
c=0
for x in range(len(arr)):
    if(arr[x]%2==0):
        a+=1
for x in range(len(arr)):
    if(arr[x]>3):
        b+=1
probability_a=a/total_outcomes
probability_b=b/total_outcomes
for x in range(len(arr)):
    if(arr[x]%2==0 and arr[x]>3):
        c+=1
probability_A_B=c/total_outcomes
probability_A_and_B=probability_A_B/probability_b
print("Probability of even numbers and greater than 3:", probability_A_and_B)
