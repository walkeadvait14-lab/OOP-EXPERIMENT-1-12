#include <iostream>
#include <cstring>
using namespace std;

class Staff
{
public:
    char name[50];
    char post[50];

    void accept()
    {
        cout << "Enter name and post: ";
        cin >> name >> post;
    }

    void display()
    {
        cout << "HOD: " << name << endl;
    }
};

int main()
{
    Staff s[5];

    for (int i = 0; i < 5; i++)
    {
        s[i].accept();
    }

    cout << "\nList of HODs:\n";
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(s[i].post, "HOD") == 0)
        {
            s[i].display();
        }
    }

    return 0;
}

OUTPUT
Enter staff name and designation: Rajesh HOD
Enter staff name and designation: Meena Lecturer
Enter staff name and designation: Arjun HOD
Enter staff name and designation: Priya Clerk
Enter staff name and designation: Kiran HOD

List of HODs:
HOD: Rajesh
HOD: Arjun
HOD: Kiran
