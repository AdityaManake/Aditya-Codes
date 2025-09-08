#include<iostream>
#include<string>
using namespace std;
class Audit;
class BankAccount
{
    private:
    string name="Aditya Manake";
    string accountnumber="A124XX9012";
    float balance=11024.85;
    friend class Audit;
};
class Audit
{
    public:
    void showAccountDetails(BankAccount account)
    {
        cout<<"Account holder name:"<<account.name<<endl;
        cout << "Account Number: " << account.accountnumber << endl;
        cout << "Balance: " << account.balance <<" Rs" << endl;
    }
};
int main()
{
    BankAccount obj;
    Audit audit;
    audit.showAccountDetails(obj);
    return 0;
}