#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* deleteAtPosition(ListNode* head, int position) {
        if (!head) return NULL; 
        if (position == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        ListNode* current = head;
        for (int i = 0; current != NULL && i < position - 1; i++) {
            current = current->next;
        }
        if (current == NULL || current->next == NULL) {
            cout << "Position out of range." << endl;
            return head;
        }
        ListNode* temp = current->next;
        current->next = current->next->next;
        delete temp;
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
int main() 
{
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    cout << "Original list: ";
    printList(head);
    Solution sol;
    int pos = 2;
    cout << "Deleting node at position " << pos << "..." << endl;
    head = sol.deleteAtPosition(head, pos);
    cout << "Updated list: ";
    printList(head);
    return 0;
}