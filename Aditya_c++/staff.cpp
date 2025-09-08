#include<iostream>
#include<string>
using namespace std;
class Staff
{
   public:
   string name;
   string post;
   void getData()
   {
       cout << "Enter staff name: ";
       getline(cin, name);
       cout << "Enter staff post: ";
       cin >> post;
       cin.ignore();  
   }
   void displayData()
   {
       cout << "Staff Name: " << name << endl;
       cout << "Staff post: " << post << endl;
   }
};
int main()
{
    Staff s1[5];
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter details for staff member " << (i + 1) << ":" << endl;
        s1[i].getData();
    }
    for(int i = 0; i < 5; i++)
    {
       if (s1[i].post == "HOD" || s1[i].post == "hod")
       {
           cout << "Details of staff member " << (i + 1) << ":" << endl;
           s1[i].displayData();
            break;
       }
       else
       {
         cout << "No HOD found in the list." << endl;
       }
       
    }
    return 0;
}
