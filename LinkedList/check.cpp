// 🔗 Topic: Linked List in C++
// Demonstration of converting an array into a linked list and checking if a value is present.

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

// Function to check if a value is present in the linked list
int checkIfPresent(node* head, int val) {
    node* temp = head;
    while (temp) {
        if (temp->data == val) return 1; // value found
        temp = temp->next;
    }
    return 0; // value not found
}

int main() {
    vector<int> arr = {2, 5, 8, 7};

    // Convert array to linked list
    node* head = convertArr2ll(arr);

    // Check if a value exists in the linked list
    int searchVal = 15;
    cout << "Is " << searchVal << " present? "
         << (checkIfPresent(head, searchVal) ? "Yes" : "No") << endl;

    searchVal = 8;
    cout << "Is " << searchVal << " present? "
         << (checkIfPresent(head, searchVal) ? "Yes" : "No") << endl;

    return 0;
}
