package Programs.Java;

@FunctionalInterface 
interface Message {
    void show();
}

@FunctionalInterface 
interface Square {
    int cal_square(int n);
}

@FunctionalInterface 
interface Addition {
    int add(int a, int b);
}

public class LambdaImplementation {
    public static void main(String[] args) {
        Message m = () -> System.out.println("Hello World");
        m.show();

        Square s = n -> n * n; 
        System.out.println("Square: " + s.cal_square(5)); 

        Addition a = (x, y) -> x + y;    
        System.out.println("Addition: " + a.add(5, 10)); 
    }    
}
