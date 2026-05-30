// 🔗 Topic: Linked List in C++
// Demonstration of converting an array into a linked list and traversing it.

#include <bits/stdc++.h>
using namespace std;

// Node structure for linked list
struct node {
public:
    int data;      // data part
    node* next;    // pointer to next node

    // Constructor with default next = nullptr
    node(int data1, node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

// Function to convert array to linked list
node* convertArr2ll(vector<int> &arr) {
    // Create head node
    node* head = new node(arr[0]);
    node* mover = head;

    // Loop through remaining elements
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);  // next defaults to nullptr
        mover->next = temp;             // link previous node to new node
        mover = temp;                   // move pointer forward
    }
    return head;
}

// Function to traverse and print linked list
void printLinkedList(node* head) {
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};

    // Convert array to linked list
    node* head = convertArr2ll(arr);

    // Print linked list
    cout << "Linked List Elements: ";
    printLinkedList(head);

    return 0;
}
