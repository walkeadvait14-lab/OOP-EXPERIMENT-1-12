#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    ifstream fin("source.txt");
    ofstream fout("destination.txt");

    if (!fin)
    {
        cout << "Error opening source file.\n";
        return 1;
    }

    char ch;
    while (fin.get(ch))
    {
        fout.put(ch);
    }

    fin.close();
    fout.close();

    cout << "File copied successfully.\n";

    fin.open("source.txt");
    if (!fin)
    {
        cout << "Error reopening source file.\n";
        return 1;
    }

    int word_count = 0;
    string word;
    while (fin >> word)
    {
        word_count++;
    }
    fin.close();
    cout << "Word count: " << word_count << endl;

    fin.open("source.txt");
    string target;
    int count = 0;
    cout << "Enter target word: ";
    cin >> target;

    while (fin >> word)
    {
        if (word == target)
            count++;
    }
    fin.close();
    cout << "Word occurrences of '" << target << "': " << count << endl;

    fin.open("source.txt");
    int digit_count = 0, space_count = 0;
    while (fin.get(ch))
    {
        if (isdigit(ch))
            digit_count++;
        if (isspace(ch))
            space_count++;
    }
    fin.close();

    cout << "Digits: " << digit_count << endl;
    cout << "Spaces: " << space_count << endl;

    return 0;
}
