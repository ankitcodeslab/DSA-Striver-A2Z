// 🔗 Topic: Linked List in C++
// Demonstration of deleting the last node in a linked list.

#include <bits/stdc++.h>
using namespace std;

// Node structure for linked list
class Node {
public:
    int data;      // data part
    Node* next;    // pointer to next node

    // Constructor
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    // Function to remove the last node of a linked list
    Node* removeLastNode(Node* head) {
        // Case 1: Empty list
        if (head == nullptr) return nullptr;

        // Case 2: Only one node
        if (head->next == nullptr) {
            delete head;
            return nullptr;
        }

        // Case 3: More than one node
        Node* temp = head;
        while (temp->next->next) { // stop at second last node
            temp = temp->next;
        }
        delete temp->next;   // delete last node
        temp->next = nullptr; // set new end
        return head;
    }
};

// Utility function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original Linked List: ";
    printList(head);

    Solution sol;
    head = sol.removeLastNode(head);

    cout << "After deleting last node: ";
    printList(head);

    return 0;
}
