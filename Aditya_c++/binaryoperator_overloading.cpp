#include<bits/stdc++.h>
using namespace std;
class MyString
{
    private:
    string s1,s2;
    public:
    MyString(string a, string b)
    {
        s1=a;
        s2=b;
    }
    void operator+()
    {
        cout<<s1+s2;
    }
};
int main()
{
    MyString m1("xyz","pqr");
    +m1;
    return 0;
}