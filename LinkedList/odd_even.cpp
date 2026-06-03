// 🔗 Topic: Rearrange Linked List - Odd Even Nodes in C++

#include <iostream>
using namespace std;

// Definition for singly-linked list node
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    // Function to rearrange linked list so that odd-indexed nodes come first, then even-indexed nodes
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* odd = head;             // pointer to odd nodes
        ListNode* even = head->next;      // pointer to even nodes
        ListNode* evenStart = head->next; // store start of even list

        // Rearrange nodes
        while (even != nullptr && even->next != nullptr) {
            odd->next = even->next;       // link odd to next odd
            even->next = even->next->next; // link even to next even

            odd = odd->next;              // move odd pointer
            even = even->next;            // move even pointer
        }

        // Attach even list after odd list
        odd->next = evenStart;
        return head;
    }
};

// Utility function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Driver code
int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    head = sol.oddEvenList(head);

    cout << "After rearranging (Odd-Even): ";
    printList(head);

    return 0;
}
