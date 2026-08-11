import java.util.Scanner;

public class Password_check {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String password = "12345";

        System.out.print("Enter password: ");
        String input = sc.nextLine();

        if (input.equals(password)) {
            System.out.println("Password is correct.");
        } else {
            System.out.println("Password is incorrect.");
        }
        sc.close();
    }
}
