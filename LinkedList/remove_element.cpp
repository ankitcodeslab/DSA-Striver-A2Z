// 🔗 Topic: Remove a Node by Value from Linked List in C++

#include <iostream>
#include <vector>
using namespace std;

// Node class definition
class Node {
public:
    int data;      // data value
    Node* next;    // pointer to next node

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to convert array to linked list
Node* convertArrToLL(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Function to remove node by element value
Node* remove_element(Node* head, int element) {
    if (head == nullptr) return head;

    // Case 1: Delete first node
    if (head->data == element) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Case 2: Delete node in middle/end
    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr) {
        if (temp->data == element) {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// Utility function to print linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Driver code
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrToLL(arr);

    cout << "Original Linked List: ";
    print(head);

    int element = 3;
    head = remove_element(head, element);

    cout << "After removing element " << element << ": ";
    print(head);

    return 0;
}
