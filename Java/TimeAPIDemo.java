package Programs.Java;

import java.time.LocalDate;
import java.time.Period;
import java.util.Scanner;

public class TimeAPIDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your DOB in (yyyy-mm-dd) format:");
        String dob = sc.nextLine();

        LocalDate birthDate = LocalDate.parse(dob);
        LocalDate today = LocalDate.now();

        Period age = Period.between(birthDate, today);

        System.out.println("Your age is: " +age.getYears() + " years " + age.getMonths() + " months " + age.getDays() + " days");

    }
}
