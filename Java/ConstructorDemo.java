class Cube
{
    int s;
    Cube()
    {
        s = 5;
    }

    void display()
    {
        System.out.println("Side = "+s);
        System.out.println("Volume = "+s*s*s);
    }
}

public class ConstructorDemo {
    public static void main(String[] args)
    {
        Cube c1 = new Cube();
        c1.display();
    }
}
