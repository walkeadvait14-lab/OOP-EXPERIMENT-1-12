#include <iostream>
#include <queue>
using namespace std;

template <class T>
class MyQueue {
private:
    queue<T> q;

public:
    void enqueue(T element) {
        q.push(element);
        cout << element << " enqueued successfully.\n";
    }

    void dequeue() {
        if (q.empty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        cout << "Dequeued element: " << q.front() << endl;
        q.pop();
    }

    void display() {
        if (q.empty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue elements: ";
        queue<T> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main() {
    MyQueue<int> myQueue;

    myQueue.enqueue(30);
    myQueue.enqueue(20);
    myQueue.enqueue(10);

    myQueue.display();

    myQueue.dequeue();
    myQueue.display();

    return 0;
}
