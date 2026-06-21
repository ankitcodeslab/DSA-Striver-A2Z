// 📌 Topic: Queue Implementation using Two Stacks in C++
// Demonstration of building a queue data structure with push, pop, peek, and empty operations.

#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> input;   // stack for enqueue operations
    stack<int> output;  // stack for dequeue operations
    int peekel = -1;    // stores front element for quick peek

    // Constructor
    MyQueue() {}

    // Push element to the back of queue
    void push(int x) {
        if (input.empty()) {
            peekel = x; // update peek element when queue is empty
        }
        input.push(x);
    }

    // Removes element from the front of queue
    int pop() {
        if (output.empty()) {
            // Transfer all elements from input to output (O(n))
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        int val = output.top();
        output.pop();

        // Update peekel if output becomes empty
        if (!output.empty()) {
            peekel = output.top();
        } else if (!input.empty()) {
            // Next front is bottom of input stack
            peekel = input.top();
        } else {
            peekel = -1; // queue is empty
        }

        return val;
    }

    // Get front element of queue
    int peek() {
        if (output.empty()) {
            return peekel;
        }
        return output.top();
    }

    // Check if queue is empty
    bool empty() {
        return input.empty() && output.empty();
    }
};

// Example usage
int main() {
    MyQueue* obj = new MyQueue();
    obj->push(10);
    obj->push(20);
    obj->push(30);

    cout << "Front element: " << obj->peek() << endl;   // 10
    cout << "Popped: " << obj->pop() << endl;           // 10
    cout << "Front after pop: " << obj->peek() << endl; // 20
    cout << "Is empty? " << obj->empty() << endl;       // 0 (false)

    return 0;
}
