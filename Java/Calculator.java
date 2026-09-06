package calculator; 

import java.util.*;
class Addition
{
    
    Addition(int a,int b)
    {
        System.out.println("The sum of " + a + " and " + b + " is " + (a+b));
    }
}
class Substract
{
    

    Substract(int a, int b)
    {
        System.out.println("The difference of " + a + " and " + b + " is " + (a-b));
    }
}
class Multiply
{
  
    Multiply(int a, int b)
    {
        System.out.println("The product of " + a + " and " + b + " is " + (a*b));
    }
}
class Divide
{
    

    Divide(int a, int b)
    {
        System.out.println("The division of " + a + " and " + b + " is " + (a/b));
    }
}
public class Calculator 
{
    public static void main(String[] args)
    {
        int a, b;
    
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number:");
        a = sc.nextInt();
        System.out.print("Enter the second number:");
        b = sc.nextInt();
        System.out.println("Enter the operation to be performed:");
        System.out.print("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        int result = sc.nextInt();
        switch(result)
        {
            case 1:
                Addition a1 = new Addition(a,b);
                break;
            case 2:
                Substract s1 = new Substract(a,b);
                break;
            case 3:
                Multiply m1 = new Multiply(a,b);
                break;
            case 4:
                Divide d1 = new Divide(a,b);
                break;
            default:
                System.out.println("Invalid choice");
        }
        
    
      
    }
}
