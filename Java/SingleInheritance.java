class Book
{
    String author, title, publisher; 
    Book(String a, String t, String p)
    {
        author = a; 
        title = t; 
        publisher = p;
        
    }

    void display()
    {
        System.out.println("Author " + author);
        System.out.println("Title " + title);
        System.out.println("Publisher " + publisher);
    }

}

class BookInfo extends Book
{
    int price, stock_position; 

    BookInfo(String a, String t, String p,int pr, int sp)
    {
        super(a, t, p);
        price = pr; 
        stock_position = sp;
    }

    void show() 
    {
        System.out.println("Price " + price);
        System.out.println("Stock Position " + stock_position);
    }
}

public class SingleInheritance {
    public static void main(String[] args) {
        BookInfo obj = new BookInfo("Aditya", "Java", "McGraw Hill", 1000, 10);
        obj.display();
        obj.show(); 
    }
}
