// Array Implemetation of queue 

#include <iostream>

class Queue {
private:
    int front, rear, size;
    int* array;

public:
    Queue(int maxSize) {
        size = maxSize;
        front = rear = -1;
        array = new int[size];
    }

    ~Queue() {
        delete[] array;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue." << std::endl;
            return;
        }
        
        if (isEmpty())
            front = 0;
            
        rear = (rear + 1) % size;
        array[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }
        
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % size;
    }

    int frontValue() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return -1; // Return some sentinel value or throw an exception
        }
        
        return array[front];
    }
};

int main() {
    Queue queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Front value: " << queue.frontValue() << std::endl;

    queue.dequeue();

    std::cout << "Front value after dequeue: " << queue.frontValue() << std::endl;

    return 0;
}
