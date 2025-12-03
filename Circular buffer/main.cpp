#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    int N;
    cout << "Enter capacity N: ";
    cin >> N;

    Queue q(N);

    // fill the queue with numbers 1 to N
    for (int i = 1; i <= N; i++) {
        q.pushBack(i);
    }

    cout  << "Queue elements: ";

    // print and empty the queue
    while (!q.isEmpty()) {
        cout << q.front() << " ";
        q.popFront();
    }
    cout << endl;

    return 0;
}