import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListDemo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> fruits = new ArrayList<>();
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Chickoo");
        fruits.add("Orange");


        for(String fruit : fruits)
        {
            System.out.println(fruit);
        }

        fruits.set(1, "Mango");
        fruits.remove("Banana");

        System.out.println(fruits.size());

        for(String fruit : fruits)
        {
            System.out.println(fruit);
        }
        System.out.print("Enter name to search:");
        String name = sc.nextLine();
        if(fruits.contains(name))
        {
            System.out.println(name+ "is present");
        }
        System.out.println(fruits);
    }
}