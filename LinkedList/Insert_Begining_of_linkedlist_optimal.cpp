#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    
    ListNode(int data1) {
        val = data1;
        next = NULL;
    }

    ListNode(int data1, ListNode *next1) {
        val = data1;
        next = next1;
    }
};

class Solution {
public:
    ListNode* insertAtHead(ListNode* &head, int X) {
        ListNode* newnode = new ListNode(X);
        newnode->next = head;
        head = newnode;
        return head;
    }
};
int main() {
    ListNode* head = NULL;
    Solution sol;
    head = sol.insertAtHead(head, 5);
    head = sol.insertAtHead(head, 10);

    // Print the list
    ListNode* temp = head;
    while (temp != NULL) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
