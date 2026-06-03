// 🔗 Topic: Insert Node at End of Singly Linked List in C++

#include <iostream>
#include <vector>
using namespace std;

// Node class definition
class Node {
public:
    int data;      // data value
    Node* next;    // pointer to next node

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Solution class containing insertion function
class Solution {
public:
    // Function to insert a node at the end of the linked list
    Node* insertAtEnd(Node* head, int x) {
        // Case 1: Empty list → new node becomes head
        if (head == nullptr) {
            return new Node(x);
        }

        // Case 2: Traverse to the last node
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Create new node and link it
        Node* newNode = new Node(x);
        temp->next = newNode;

        return head;
    }
};

// Utility function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Driver code
int main() {
    Solution sol;

    // Create initial linked list manually
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    cout << "Original Linked List: ";
    printList(head);

    // Insert new element at end
    head = sol.insertAtEnd(head, 4);

    cout << "After inserting 4 at end: ";
    printList(head);

    return 0;
}
