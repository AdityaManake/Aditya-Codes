import java.util.HashSet;

public class HashSetDemo{
    public static void main(String[] args) {
        HashSet<String> students = new HashSet<>();
        students.add("Aditya");
        students.add("Heaven");
        students.add("Manas");
        students.add("Pranav");
        System.out.println("Hashset:" +students);
        students.remove("Heaven");
        System.out.print("hashset after removing heaven:" +students);

        if(students.contains("Aditya"))
        {
            System.out.println("Aditya is present");
        }
        else
        {
            System.out.println("Aditya is absent");
        }
    }
}