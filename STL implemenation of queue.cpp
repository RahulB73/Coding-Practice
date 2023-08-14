// STL implemenation of queue

#include <iostream>
#include <queue>

int main() {
    // Create a queue of integers
    std::queue<int> q;

    // Enqueue elements
    q.push(1);
    q.push(2);
    q.push(3);

    // Print the front element
    std::cout << "Front element: " << q.front() << std::endl;

    // Dequeue elements
    q.pop();
    q.pop();

    // Check if the queue is empty
    if (q.empty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue is not empty" << std::endl;
    }

    return 0;
}
