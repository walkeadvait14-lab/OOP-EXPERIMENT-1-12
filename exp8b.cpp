#include <iostream>
using namespace std;

class ILogin {
protected:
    string name;
    string password;
public:
    virtual void accept() = 0;
    virtual void display() = 0;
};

class EmailLogin : public ILogin {
private:
    string email;
public:
    void accept() override {
        cout << "Enter Email Login Name: ";
        cin >> name;
        cout << "Enter Email Password: ";
        cin >> password;
        cout << "Enter Email ID: ";
        cin >> email;
    }

    void display() override {
        cout << "\n--- Email Login Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
        cout << "Email ID: " << email << endl;
    }
};

class Membership : public ILogin {
private:
    int memberID;
public:
    void accept() override {
        cout << "Enter Membership Login Name: ";
        cin >> name;
        cout << "Enter Membership Password: ";
        cin >> password;
        cout << "Enter Membership ID: ";
        cin >> memberID;
    }

    void display() override {
        cout << "\n--- Membership Login Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
        cout << "Membership ID: " << memberID << endl;
    }
};

int main() {
    ILogin* login;

    EmailLogin e;
    Membership m;

    login = &e;
    login->accept();
    login->display();

    login = &m;
    login->accept();
    login->display();

    return 0;
}
