// 🔗 Topic: Remove k-th Node from Linked List in C++

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

// Function to remove k-th node from linked list
Node* removek(Node* head, int k) {
    if (head == nullptr || k <= 0) return head;

    // Case 1: Delete first node
    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Case 2: Delete k-th node
    int count = 0;
    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr) {
        count++;
        if (count == k) {
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

    int k = 3;
    head = removek(head, k);

    cout << "After removing " << k << "-th node: ";
    print(head);

    return 0;
}
