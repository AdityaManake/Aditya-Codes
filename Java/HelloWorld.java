import java.util.Scanner;

public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("=========================================");
        System.out.println("   Welcome to your Java Practice Suite!  ");
        System.out.println("=========================================");
        System.out.println("Congratulations, your Java environment is fully working!");
        
        Scanner scanner = new Scanner(System.in);
        System.out.print("\nEnter your name: ");
        String name = scanner.nextLine();
        
        System.out.printf("Hello, %s! Happy coding in Java 25!\n", name);
        System.out.println("=========================================");
        scanner.close();
    }
}
