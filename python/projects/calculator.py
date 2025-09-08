def takinginputs():
    num1=float(input("Enter the first number:"))
    num2=float(input("Enter the second number:"))
    return num1,num2
def options():
    print("--------Simple calculator:--------")
    print("Enter options:")
    print("1.Addition")
    print("2.Substraction")
    print("3.Multiplication")
    print("4.Division")
    option=int(input("Enter your option for which you want to perform your task:"))
    return option
def calculation(option,num1,num2):
    if option == 0 or option > 4:
        print("Enter a valid number!")
    else:
        if option==1:
            sum = num1+num2
            print("Sum=",sum)
        elif option==2:
            difference= num1-num2  
            print("Difference=",difference)
        elif option==3:
            product=num1*num2   
            print("Product=",product)
        else:
            ratio=num1/num2
            print("Division=",ratio)
option=options()
num1, num2=takinginputs()
calculation(option,num1,num2)


