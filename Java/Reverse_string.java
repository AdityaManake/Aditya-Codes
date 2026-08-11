import java.util.Scanner;
public class Reverse_string {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        String reverse = "";
        for(int i = str.length()-1 ; i>=0 ; i--)
        {
            reverse = reverse + str.charAt(i);
        }
        System.out.print("The reverse string is: "+reverse);
        sc.close(); 
    }
}
