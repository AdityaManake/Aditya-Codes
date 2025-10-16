#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    ifstream new_file("First.txt");
    if (!new_file) {
        cout << "Error in opening First.txt!" << endl;
        return 1;
    }

    char ch;
    int digits_count = 0;
    int spaces_count = 0;

    while (new_file.get(ch)) {
        if (isdigit(ch)) digits_count++;
        if (isspace(ch)) spaces_count++;
    }

    new_file.close();

    cout << "Number of digits: " << digits_count << endl;
    cout << "Number of spaces: " << spaces_count << endl;
    return 0;
}