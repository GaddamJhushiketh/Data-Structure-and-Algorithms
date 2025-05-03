#include<iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            ListNode* dummy = new ListNode(-1);
            dummy->next = head;
            ListNode* current = dummy;
            while(current->next!=NULL)
            {
                if(current->next->val == val)
                {
                    current->next = current->next->next;
                }
                else
                {
                    current = current->next;
                }
            }
            return dummy->next;
        }
};
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    int valToRemove = 6;
    ListNode* modifiedHead = sol.removeElements(head, valToRemove);

    cout << "Modified List after removing " << valToRemove << ": ";
    printList(modifiedHead);

    return 0;
}