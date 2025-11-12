#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char str[100];
public:
    MyString(const char* s = "") {
        strcpy(str, s);
    }

    MyString operator+(MyString s) {
        MyString temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display() {
        cout << str;
    }
};

int main() {
    MyString s1("xyz");
    MyString s2("pqer");
    MyString s3;

    s3 = s1 + s2;

    cout << "Concatenated String: ";
    s3.display();

    return 0;
}
