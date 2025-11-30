#Creating lists methods(4 methods)
#1. Square brackets method
my_list=[1,2,3,4,"Aditya",True]
print(my_list)

#2. Using list constructor
my_list2=list((1,2,3,4,"Aditya",True))
print(my_list2)
#3. Range method
number=list(range(1,11,1))
print(number)

#4. List comprehension method
squares=[i**2 for i in range(1,11) if i%2==0]
print(squares)

#updating
my_list2[0]='Manake'

#slicing
my_list2[0:3]=10,20,'Hello'
print(my_list2)

#repetition
str="hello"
print(str * 3)

#aliasing
list_a=[1,2,3,4]
list_b=list_a
list_b[0]=100
print(list_a, list_b)

#copy function in lists
list_1=[1,2,3,4]
list_2=list_1.copy()
list_2[0]=100
print(list_1, list_2)


