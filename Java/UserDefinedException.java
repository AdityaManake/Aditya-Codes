import java.util.Scanner;

class Authentication extends Exception {
    Authentication(String msg) {
        super(msg);
    }
}

public class UserDefinedException {
    public static void main(String[] args) throws Authentication
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the password:");
        String pass = sc.nextLine();
        try{
        if(!pass.equals("admin123"))
        {
            throw new Authentication("Incorrect password");
        }
        else
        {
            System.out.println("Access granted!");
        }
    }
    catch(Authentication e)
    {
        System.out.println(e.getMessage());
    }
}
}
