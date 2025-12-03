# Circular Queue Implementation in C++

This project implements a **Queue** data structure using a dynamic array and **Circular Buffer** logic.

## Features

* **Circular Buffer Logic:** Efficient utilization of space. When the tail reaches the end of the array, it wraps around to the beginning using modulo arithmetic.
* **Dynamic Memory Management:** The queue size is determined at runtime.
* **Memory Safety:** Implements the "Rule of Three" (Destructor, Copy Constructor, Copy Assignment Operator) to prevent memory leaks and ensure deep copying.
* **Time Complexity:**
    * Enqueue (`pushBack`): $O(1)$
    * Dequeue (`popFront`): $O(1)$

## Methods Implemented

* `pushBack(int value)`: Adds an element to the back of the queue.
* `popFront()`: Removes an element from the front.
* `front()`: Returns the value of the front element.
* `isEmpty()`: Checks if the queue is empty.
* `isFull()`: Checks if the queue has reached its capacity.
