#include <iostream>
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
        ListNode* deleteMiddle(ListNode* head) {
            if (!head || !head->next) return 0;
            ListNode* slow = head;
            ListNode* fast = head;
            ListNode* prev = head;
            ListNode* temp= nullptr;
            while (fast && fast->next) {
                temp = slow;
                slow = slow->next;
                fast = fast->next->next;
            }
            temp->next = slow->next;
            delete slow;
            return prev;
        }
    };
int main() {
    ListNode* node5 = new ListNode(5);
    ListNode* node4 = new ListNode(4, node5);
    ListNode* node3 = new ListNode(3, node4);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* head = new ListNode(1, node2);
    Solution sol;
    ListNode* newHead = sol.deleteMiddle(head);
    while (newHead) {
        cout << newHead->val << " ";
        ListNode* temp = newHead;
        newHead = newHead->next;
        delete temp;
    }
    cout << endl;
    return 0;
}