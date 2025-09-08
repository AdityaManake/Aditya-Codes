#include <iostream>
using namespace std;

class Swapping
{
private:
    int value;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> value;
    }

    void display()
    {
        cout << value << endl;
    }

    friend void swapValues(Swapping &x, Swapping &y);
};

void swapValues(Swapping &n1, Swapping &n2)
{
    int temp = n1.value;
    n1.value = n2.value;
    n2.value = temp;
}

int main()
{
    Swapping obj1, obj2;
    obj1.getData();
    obj2.getData();

    swapValues(obj1, obj2);

    cout << "After swapping:\n";
    obj1.display();
    obj2.display();

    return 0;
}