#include <iostream>
#include <string>
using namespace std;

class MyString {
public:
    string str;

    // Overload + operator
    MyString operator+(const MyString& other) const {
        MyString temp;
        temp.str = str + other.str;
        return temp;
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    MyString s1, s2, s3;
    s1.str = "xyz";
    s2.str = "pqr";
    s3 = s1 + s2;

    cout << "Concatenated string: ";
    s3.display();
    return 0;
}