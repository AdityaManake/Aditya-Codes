interface FY
{
    int rollNo = 59; 
    String name = "Aditya";
}
interface SY 
{
    String result = "Pass";
}

class Student implements  FY, SY 
{
    void show()
    {
        System.out.println("Student name: " +name);
        System.out.println("Student roll no: " + rollNo);
        System.out.println("Student result: " + result);
    }
}

public class MultipleInheritance 
{

    public static void main(String[] args)
    { 
        Student s1 = new Student();
        s1.show();
    }
   
}
