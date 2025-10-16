#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("Demo.txt",ios::out);
    if(!new_file)
    {
        cout<<"Error in creating file!!!"<<endl;
        return 0;
    }
    else
    {
        cout<<"File created successfully!!!"<<endl;
        new_file<<"This is a demo file"<<endl;
        new_file.close();
    }
    return 0;
}

