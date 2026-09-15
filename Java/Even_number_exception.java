class CheckEvenNumber
{
    void check_number(int n1) throws Exception
    {
        if(n1%2 != 0)
        {
            throw new Exception("No. not even");
        }
        else
        {
            System.out.println("No. is even");
        }
    }
}
public class Even_number_exception {
    
    public static void main(String[] args)
    {
        CheckEvenNumber obj = new CheckEvenNumber();
        try
        {
            obj.check_number(10);
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}
