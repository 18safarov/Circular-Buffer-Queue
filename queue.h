#ifndef CIRCULAR_BUFFER_QUEUE_H
#define CIRCULAR_BUFFER_QUEUE_H

class Queue {

private:
    int* data;  // dynamic array to store elements
    int capacity;   // max number of elements
    int size;   // current number of elements
    int head;   // index of the front element (remove from here)
    int tail;   // index where the next element will be added

public:

    Queue(int cap);
    ~Queue();

    // required for deep copying of dynamic memory
    Queue(const Queue& other);
    Queue& operator=(const Queue& other);

    bool isEmpty();
    bool isFull();
    void pushBack(int value);
    void popFront();
    int front();
};

#endif //CIRCULAR_BUFFER_QUEUE_H