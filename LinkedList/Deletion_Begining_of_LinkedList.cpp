//Definition of singly linked list:
#include <iostream>
using namespace std;
#include <vector>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};

class Solution {
    public:
        ListNode* deleteHead(ListNode* &head) {
            ListNode* newnode;
            newnode=head;
            head=newnode->next;
            delete newnode;
            return head;
        }
};
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main() {
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);

    cout << "Original list: ";
    printList(head);
    Solution sol;
    head = sol.deleteHead(head);
    cout << "After deleting head: ";
    printList(head);
    return 0;
}