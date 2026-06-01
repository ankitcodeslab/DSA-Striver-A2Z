// 🔗 Topic: Linked List in C++
// Demonstration of deleting the head node in a linked list.

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
    // Function to delete the head node of a linked list
    Node* deleteHead(Node* head) {
        if (head == NULL) return NULL; // empty list case

        Node* temp = head;             // store current head
        head = head->next;             // move head to next node
        delete temp;                   // free memory of old head
        return head;                   // return new head
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
    // Create linked list: 10 -> 20 -> 30
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original Linked List: ";
    printList(head);

    Solution sol;
    head = sol.deleteHead(head);

    cout << "After deleting head: ";
    printList(head);

    return 0;
}
