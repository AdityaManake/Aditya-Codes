//wrong code!

#include<iostream>
#include<string>
using namespace std;
class String
{
  private:
    string str;
    public: 
    void accept()
    {
        cout<<"Enter a string: ";
        getline(cin,str);
    }
    String(string s)
    {
        str=s;
    }
    string operator +(string s)
    {
        string result;
        result=strconcat(str,s2.str);
        return str+s;
    }

};
int main()
{
    String s1,s2("Manake"),s3;
    s1.accept();
    s3=s1+s3;

    return 0;
}
