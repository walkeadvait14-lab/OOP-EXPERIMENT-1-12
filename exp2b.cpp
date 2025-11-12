#include <iostream>
using namespace std;

class Account
{
public:
    int accNo;
    float balance;

    void accept()
    {
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void interest()
    {
        if (balance >= 5000)
            balance += balance * 0.10;
    }

    void display()
    {
        cout << "Account No: " << accNo
             << ", Balance: " << balance << endl;
    }
};

int main()
{
    Account acc[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nAccount " << i + 1 << ":" << endl;
        acc[i].accept();
    }

    for (int i = 0; i < 5; i++)
    {
        acc[i].interest();
    }

    cout << "\nAccount details after applying interest:\n";
    for (int i = 0; i < 5; i++)
    {
        acc[i].display();
    }

    return 0;
}

OUTPUt
Account 1:
Enter account number: 101
Enter balance: 4000

Account 2:
Enter account number: 102
Enter balance: 5500

Account 3:
Enter account number: 103
Enter balance: 10000

Account 4:
Enter account number: 104
Enter balance: 2500

Account 5:
Enter account number: 105
Enter balance: 8000

Account details after applying interest:
Account No: 101, Balance: 4000
Account No: 102, Balance: 6050
Account No: 103, Balance: 11000
Account No: 104, Balance: 2500
Account No: 105, Balance: 8800
