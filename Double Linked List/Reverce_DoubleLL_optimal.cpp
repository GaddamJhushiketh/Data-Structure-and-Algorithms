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
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = nullptr;
            ListNode* curr = head;
            while (curr) {
                ListNode* temp = curr->next;
                curr->next = prev;
                curr->prev = temp;
                prev = curr;
                curr = temp;
            }
            return prev;
        }
};
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " <-> ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->prev = head;
    head->next->next = new ListNode(30);
    head->next->next->prev = head->next;
    cout << "Original List: ";
    printList(head);
    Solution sol;
    ListNode* reversedHead = sol.reverseList(head);
    cout << "Reversed List: ";
    printList(reversedHead);
    return 0;
}