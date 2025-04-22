#include <iostream>
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
class Solution 
{
public:
    ListNode* insertAtHead(ListNode* &head, int X) {
        ListNode* newnode = new ListNode(X);
        newnode->next = head;
        head = newnode;
        return head;
    }
    int findPosition(ListNode* head, int val) {
        ListNode* temp = head;
        int position = 0;
        while (temp != NULL) {
            if (temp->val == val) 
            {
                return position;
            }
            temp = temp->next;
            position++;
        }
        return -1;
    }
};

int main() {
    ListNode* head = nullptr; 
    Solution sol;
    head = sol.insertAtHead(head, 5);
    head = sol.insertAtHead(head, 10);
    head = sol.insertAtHead(head, 15);
    head = sol.insertAtHead(head, 20);
    ListNode* temp = head;
    cout << "Linked List: head";
    while (temp != NULL) {
        cout <<"->"<<temp->val;
        temp = temp->next;
    }
    cout << endl;
    int searchElement = 5;
    int pos = sol.findPosition(head, searchElement);
    if (pos != -1) {
        cout << searchElement << " is found at position " << pos << "." << endl;
    } else {
        cout << searchElement << " is not found in the list." << endl;
    }
    return 0;
}
