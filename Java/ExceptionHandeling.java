import java.util.*;
class EvenNumber extends Exception {
    EvenNumber(String msg) {
        super(msg);
    }
}

public class ExceptionHandeling {
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number:");
        int n = sc.nextInt();
        try{
            if(n %2 != 0)
            {
                throw new EvenNumber("You have entered an odd number");
            }
            else
            {
                System.out.println("You have entered an even number.");
            }
        }
        catch(EvenNumber e)
        {
            System.out.println(e.getMessage());
        }
    }
}
