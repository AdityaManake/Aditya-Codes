#include <iostream>
using namespace std;
class Accounts
{
public:
    int accountNumber;
    float balance;
    void acceptDetails()
    {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter balance: ";
        cin >> balance;
    }
};
int main()
{
    Accounts obj[10];
    int i;
    float interest;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter details for account " << i + 1 << endl;
        obj[i].acceptDetails();
    }
    for (i = 0; i < 10; i++)
    {
        if (obj[i].balance >= 5000)
        {
            interest = obj[i].balance * 0.10;
            obj[i].balance+=interest;
            cout << "Interested amount for account " << obj[i].accountNumber << " is: " << obj[i].balance << endl;
        }
    }
    return 0;
}