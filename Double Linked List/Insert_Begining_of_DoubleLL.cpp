#include <iostream>
using namespace std;

/* Definition of doubly linked list */
struct ListNode {
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode() {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1) {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1) {
        val = data1;
        next = next1;
        prev = prev1;
    }
};

class Solution {
public:
    ListNode* insertBeforeHead(ListNode* head, int X) {
        ListNode* newnode = new ListNode(X);  // Fixed variable name from 'x' to 'X'
        newnode->next = head;
        newnode->prev = nullptr;
        if (head != nullptr) {
            head->prev = newnode;
        }
        head = newnode;
        return head;
    }
};

// Helper function to print the list from head to tail
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << "<->";
        head = head->next;
    }
    cout << "NULL"<<endl;
}

int main() {
    Solution sol;
    ListNode* head = nullptr;

    // Insert elements at the beginning of the list
    head = sol.insertBeforeHead(head, 30);
    head = sol.insertBeforeHead(head, 20);
    head = sol.insertBeforeHead(head, 10);

    // Print the doubly linked list
    cout << "Doubly Linked List: ";
    printList(head);

    return 0;
}
