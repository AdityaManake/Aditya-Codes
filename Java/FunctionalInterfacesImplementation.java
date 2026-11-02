import java.util.function.*;
public class FunctionalInterfacesImplementation{

    public static void main(String[] args) {
        Consumer<String>c = name -> System.out.println(name);
        c.accept("Hello Aditya");

        Predicate<Integer> p = n -> n>10;
        System.out.println(p.test(5));

        Supplier<String> s = () -> "Hello World"; 
        System.out.println(s.get());

        Function<Integer, Integer> f = n -> n*n;
        System.out.println(f.apply(5)); 
    }
}