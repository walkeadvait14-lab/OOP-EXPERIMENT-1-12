#include <iostream>
#include <stack>
using namespace std;

template <class T>
class StackDemo {
    stack<T> myStack;

public:
    void accept() {
        int size;
        cout << "Enter the size of the stack: ";
        cin >> size;

        T data;
        for (int i = 0; i < size; i++) {
            cout << "Enter data for stack element " << i + 1 << ": ";
            cin >> data;
            myStack.push(data);
        }
    }

    void popElement() {
        if (myStack.empty()) {
            cout << "The stack is empty.\n";
            return;
        }

        cout << "Deleting top element: " << myStack.top() << endl;
        myStack.pop();
    }

    void display() {
        if (myStack.empty()) {
            cout << "The stack is empty.\n";
            return;
        }

        stack<T> temp = myStack; // copy stack for display
        cout << "Stack elements (top to bottom): ";
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main() {
    StackDemo<int> s1;

    s1.accept();
    s1.display();

    s1.popElement();
    s1.display();

    return 0;
}
