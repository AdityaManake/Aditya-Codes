#include <iostream>
#include <string>
using namespace std;

// Base class
class Login {
protected:
    string name;
    string password;

public:
    virtual void accept() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;
    }
};

// Derived class for Email login
class EmailLogin : public Login {
    string email;

public:
    void accept() override {
        Login::accept();
        cout << "Enter email: ";
        cin >> email;
    }

    void display() {
        cout << "\n--- Email Login Details ---\n";
        cout << "Name: " << name << "\nPassword: " << password << "\nEmail: " << email << endl;
    }
};

// Derived class for Membership login
class MembershipLogin : public Login {
    string membershipID;

public:
    void accept() override {
        Login::accept();
        cout << "Enter membership ID: ";
        cin >> membershipID;
    }

    void display() {
        cout << "\n--- Membership Login Details ---\n";
        cout << "Name: " << name << "\nPassword: " << password << "\nMembership ID: " << membershipID << endl;
    }
};

int main() {
    EmailLogin e;
    MembershipLogin m;

    e.accept();
    m.accept();

    e.display();
    m.display();

    return 0;
}