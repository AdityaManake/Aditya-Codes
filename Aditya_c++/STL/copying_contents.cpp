//Note:first create a text file named "First" only then the code will work
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream first_file;
    fstream second_file;
    first_file.open("First.txt", ios::in);
    if (!first_file) {
        cout << "Error opening First.txt for reading!" << endl;
        return 1;
    }
    second_file.open("Second.txt", ios::out);
    if (!second_file) {
        cout << "Error opening Second.txt for writing!" << endl;
        return 1;
    }
    char ch;
    while (first_file.get(ch)) {
        second_file.put(ch);
    }
    first_file.close();
    second_file.close();
    cout << "File copied successfully!" << endl;
    return 0;
}