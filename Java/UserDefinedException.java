class AgeCheckException extends Exception{
    AgeCheckException(String message)
    {
        super(message);
    }
}

public class UserDefinedException
{
    static void check_Age(int age) throws AgeCheckException
    {
        if(age<18)
        {
            throw new AgeCheckException("You're a minor");
        }
        else{
            System.out.println("You're an adult");
        }
    }

    public static void main(String[] args) {
        int age = 15;
        try{
            check_Age(age);
        }
        catch(AgeCheckException e)
        {
            System.out.println("Exception caught:"+e.getMessage());
        }
    }
}