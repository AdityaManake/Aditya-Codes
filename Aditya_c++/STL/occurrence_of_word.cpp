#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("First.txt",ios::in);
    if(!new_file)
    {
        cout << "Error in opening First.txt!" << endl;
        return 1;
    }
    string target="Aditya";
    string word;
    int count=0;
    while(new_file>>word)
    {
        if(word==target)
        {
            count++;
        }
    }
    new_file.close();
    cout << "The word \"" << target << "\" occurred " << count << " times." << endl;
    return 0;
}