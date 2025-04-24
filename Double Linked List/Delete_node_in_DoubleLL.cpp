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
    ListNode* deleteHead(ListNode* head) {
        if (head == nullptr) return nullptr;
        ListNode* newnode = head;
        head = head->next;
        if (head != nullptr)
            head->prev = nullptr;
        delete newnode;
        return head;
    }
};

// Helper function to print the list
void printList(ListNode* head) {

    while (head != nullptr) {
        cout << head->val<<"<->";
        head = head->next;
    }
    cout <<"NULL"<< endl;
}

int main() {
    // Create a simple doubly linked list: 10 <-> 20 <-> 30
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->prev = head;
    head->next->next = new ListNode(30);
    head->next->next->prev = head->next;

    cout << "Original List: ";
    printList(head);

    Solution sol;
    head = sol.deleteHead(head);  // Delete the head node

    cout << "After deleting head: ";
    printList(head);

    return 0;
}
