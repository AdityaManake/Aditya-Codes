class Book
{
    String author, title, publisher; 
    Book(String a, String t, String p)
    {
        author = a; 
        title = t; 
        publisher = p;
        
    }

}

class BookInfo extends Book
{
    int price, stock_position;
    double revenue; 

    BookInfo(String a, String t, String p,int pr, int sp)
    {
        super(a, t, p);
        price = pr; 
        stock_position = sp;
    }
}

class BookSales extends BookInfo
{
    int noOfCopiesSold; 
    BookSales(String a, String t, String p,int pr, int sp, int ncs)
    {
        super(a,t,p,pr,sp);
        noOfCopiesSold = ncs;
    }

    void revenueGenerated()
    {
        revenue = price*noOfCopiesSold;
        
    }
    void showAll()
    {
        System.out.println("Author " + author);
        System.out.println("Title " + title);
        System.out.println("Publisher " + publisher);
        System.out.println("Price " + price);
        System.out.println("Stock Position " + stock_position);
        System.out.println("Number of Copies Sold " + noOfCopiesSold);
        System.out.println("Revenue Generated " + (price*noOfCopiesSold));
    }
}


public class MultilevelInheritance {
    public static void main(String[] args)
    {
        BookSales obj = new BookSales("Aditya", "Java", "McGraw Hill", 1000, 10, 5);
        obj.revenueGenerated();
        obj.showAll();
    }    
}
