#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("First.txt",ios::in);
    if(!new_file)
    {
        cout<<"Error occured while opening!"<<endl;
        return 1;
    }
    char ch;
    int words_count=0;
    bool inWord=false;
    while(new_file.get(ch))
    {
        if(isspace(ch))
        {
            inWord=false;
        }
        else if (!inWord)
        {
            words_count++;
            inWord=true;
        }
    }
    new_file.close();
    cout<<"Number of words:"<<words_count<<endl;
    return 0;
}