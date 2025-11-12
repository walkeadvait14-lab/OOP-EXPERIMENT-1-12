#include <iostream>
using namespace std;

class ClgStudent
{
protected:
    string clgcode;
};

class Test : virtual public ClgStudent
{
protected:
    int perc;
};

class Sports : virtual public ClgStudent
{
protected:
    int s_score;
};

class Result : public Test, public Sports
{
public:
    void accept()
    {
        cout << "Enter college code, percentage, and sports score: ";
        cin >> clgcode >> perc >> s_score;
    }

    void display()
    {
        cout << "\nCollege Code = " << clgcode << endl;
        cout << "Percentage = " << perc << "%" << endl;
        cout << "Sports Score = " << s_score << endl;
    }
};

int main()
{
    Result r1;
    r1.accept();
    r1.display();
    return 0;
}
