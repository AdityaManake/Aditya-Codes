package geometry;



public class Geometry {
    public double circleArea(double r)
    {
        return Math.PI * r * r; 
    }
    public double rectangleArea(double length, double breadth)
    {
        return length*breadth;
    }

    public static void main(String[] args)
    {
        Geometry g = new Geometry();
        System.out.println("Circle Area (r=5): " + g.circleArea(5));
        System.out.println("Rectangle Area (4x6): " + g.rectangleArea(4, 6));
    }
}
