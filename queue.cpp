#include "queue.h"

Queue::Queue(int cap)
{
    capacity = cap; // remember the capacity
    size = 0;
    head = 0;
    tail = 0;
    data = new int[capacity]; // allocate memory for the array

}

Queue::~Queue() {
    delete[] data; // clean up memory
}

// copy constructor (Deep Copy)
Queue::Queue(const Queue &other) {
    capacity = other.capacity;
    size = other.size;
    head = other.head;
    tail = other.tail;

    data = new int[capacity];   // allocate new memory for the copy

    for (int i = 0; i < capacity; i++) {
        data[i] = other.data[i];
    }
}

// assignment operator
Queue& Queue::operator=(const Queue &other) {
    if (this ==  &other) {
        return *this;   // handle self-assignment (e.g., q1 = q1)
    }

    delete[] data;  // Important: free existing memory before overwriting

    capacity = other.capacity;
    size = other.size;
    head = other.head;
    tail = other.tail;

    data = new int[capacity];

    for (int i = 0; i < capacity; i++) {
        data[i] = other.data[i];
    }

    return *this;
}


bool Queue::isEmpty() {
    return size == 0;
}

bool Queue::isFull() {
    return size == capacity;
}

void Queue::pushBack(int value) {
    //the queue is full, can't add more.
    if (isFull()) {
        return;
    }

    data[tail] = value;
    // // circular logic: wrap around to 0 if we reach the end
    tail = (tail + 1) % capacity;
    size++;
}

void Queue::popFront() {
    if (isEmpty()) {
        return;
    }

    // circular logic: move head forward, wrapping around if needed
    head = (head + 1) % capacity;
    size--;
}

int Queue::front() {
    if (isEmpty()) {
        return -1;
    }

    return data[head];
}

