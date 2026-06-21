// 📌 Topic: Stack Implementation using Singly Linked List in C++
// Demonstration of building a stack data structure with push, pop, top, and empty operations.

#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list node
struct Node {
    int val;       // value stored in the node
    Node* next;    // pointer to the next node
    Node(int x) : val(x), next(nullptr) {}
};

// Stack implementation using linked list
class MyStack {
private:
    Node* head;   // pointer to the top of the stack
    int sz;       // size of the stack

public:
    // Constructor
    MyStack() {
        head = nullptr;
        sz = 0;
    }
    
    // Push element onto stack
    void push(int x) {
        Node* temp = new Node(x);
        temp->next = head;  // new node points to current head
        head = temp;        // update head to new node
        sz++;
    }
    
    // Pop element from stack
    int pop() {
        if (empty()) return -1; // safe check
        Node* temp = head;
        int val = temp->val;
        head = head->next;      // move head to next node
        delete temp;            // free memory
        sz--;
        return val;
    }
    
    // Get top element of stack
    int top() {
        if (empty()) return -1;
        return head->val;
    }
    
    // Check if stack is empty
    bool empty() {
        return sz == 0;
    }
    
    // Get size of stack
    int size() {
        return sz;
    }
};

// Example usage
int main() {
    MyStack* obj = new MyStack();
    obj->push(10);
    obj->push(20);
    obj->push(30);

    cout << "Top element: " << obj->top() << endl;   // 30
    cout << "Popped: " << obj->pop() << endl;        // 30
    cout << "Top after pop: " << obj->top() << endl; // 20
    cout << "Is empty? " << obj->empty() << endl;    // 0 (false)
    cout << "Stack size: " << obj->size() << endl;   // 2

    return 0;
}
