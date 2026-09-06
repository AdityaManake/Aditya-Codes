import java.lang.*;
class AutoboxingUnboxingImplementation
{
    Integer a = 10;
    int n1 = a;
    double b = 10.77;
    Double n2 = b; 

    void display()
    {
        System.out.println("Unboxing of Integer = " + n1);
        System.out.println("Autoboxing of Double = " + n2);
    }

}

class ImplementationOfWrapperClassMethods
{
    String str = "100";
    int num = Integer.parseInt(str);

    Integer obj = Integer.valueOf("200");
    String result = obj.toString();

    void display()
    {
        System.out.println("String to int = " + num);
        System.out.println("String to Integer = " + obj);   
        System.out.println("Integer to String = " + result);
    }
}


public class WrapperClassImplementation {
    public static void main(String[] args)
    {
        AutoboxingUnboxingImplementation obj1 = new AutoboxingUnboxingImplementation();
        obj1.display();

        ImplementationOfWrapperClassMethods obj2 = new ImplementationOfWrapperClassMethods();
        obj2.display();
    }
}
