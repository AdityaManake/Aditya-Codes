import java.util.LinkedList;
import java.util.Scanner;

public class LinkedListDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        LinkedList<String> students = new LinkedList<>();
        students.add("Aditya");
        students.add("Heaven");
        students.add("Manas");
        students.add("Pranav");
        System.out.println(students);
        students.addFirst("Geet");
        students.addLast("Rahul");
        students.remove("Pranav");
        System.out.println(students);
        System.out.println("Enter student name to search:");
        String name = sc.nextLine();
        if (students.contains(name)) {
            System.out.println(name + " is present");
        } else {
            System.out.println(name + " is not present");
        }

        System.out.println("Total students: " + students.size());
        sc.close();
    }
}
