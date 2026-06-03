// 🔗 Topic: Create and Print Doubly Linked List in C++

#include <iostream>
#include <vector>
using namespace std;

// Node class definition for Doubly Linked List
class Node {
public:
    int data;      // data value
    Node* next;    // pointer to next node
    Node* back;    // pointer to previous node

    // Constructor with next and back pointers
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    // Constructor with only data (default next/back = nullptr)
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

// Function to convert array to Doubly Linked List
Node* convertArrToDLL(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// Function to print Doubly Linked List (forward traversal)
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Driver code
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrToDLL(arr);

    cout << "Doubly Linked List: ";
    print(head);

    return 0;
}
