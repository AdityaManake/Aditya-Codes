public class greatest_num {
    public static void main(String[] args)
    {
        int a,b,c;
        a=3;b=5;c=9;
        if(a>=b && a>=c){
            System.out.println("Greatest number is: " +a);
        }
        else if(b>=a && b>=c){
            System.out.println("Greatest number is: " +b);
        }
        else{
            System.out.println("Greatest number is: " +c);
        }

    }
}
