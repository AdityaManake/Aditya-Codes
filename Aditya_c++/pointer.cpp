#include<iostream>
#include<string>
using namespace std;
class Book
{
    private:
    string title;
    string author;
    float price;
    public:
    void getData()
    {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter book author: ";
        getline(cin, author);
        cout << "Enter book price: ";
        cin >> price;
        cin.ignore();  
    }
    void displayData()
    {
        cout << "Book Title: " << title << endl;
        cout << "Book Author: " << author << endl;
        cout << "Book Price: " << price << " Rs" << endl;
    }
};
int main()
{
    Book b1;
    Book *ptr;
    ptr = &b1;
    cout << "Enter details of the book:" << endl;
    ptr->getData();
    cout << "Details of the book:" << endl;
    ptr->displayData();
    return 0;

}