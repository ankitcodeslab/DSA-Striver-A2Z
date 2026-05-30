// 🔗 Topic: Linked List in C++
// Demonstration of creating a simple linked list node structure and using it.

#include <bits/stdc++.h>
using namespace std;

// Node structure for linked list
struct node {
public:
    int data;      // data part
    node* next;    // pointer to next node

    // Constructor to initialize node
    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }
};

int main() {
    // Example array to initialize linked list nodes
    vector<int> arr = {2, 5, 8, 7};

    // Create first node with data = arr[0], next = NULL
    node* head = new node(arr[0], NULL);

    // Print details of the first node
    cout << "First Node Data: " << head->data << endl;
    cout << "First Node Next: " << head->next << endl; // should be NULL

    // Build the rest of the linked list
    node* current = head;
    for (int i = 1; i < arr.size(); i++) {
        node* newNode = new node(arr[i], NULL);
        current->next = newNode; // link current node to new node
        current = newNode;       // move current pointer
    }

    // Traverse and print the linked list
    cout << "\nLinked List Elements: ";
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
