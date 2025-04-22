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
    ListNode* insertAtEnd(ListNode* &head,int X)
    {
        ListNode* newnode = new ListNode(X);
        if(head == NULL)
        {
            head = newnode;
            return head;
        }
        ListNode* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        return head;
    }
    ListNode* insertAtPosition(ListNode* &head,int X,int pos)
    {
        ListNode* newnode = new ListNode(X);
        if(pos == 0)
        {
            newnode->next = head;
            head = newnode;
            return head;
        }
        ListNode* temp = head;
        for(int i=0;i<pos-1 && temp != NULL;i++)
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
        cout<<"Position out of bounds "<<X<<" is not inserted.\n";
        return head;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        return head;
    }
};
int main() {
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3)));
    Solution sol;
    head = sol.insertAtHead(head, 5);
    head = sol.insertAtEnd(head, 10);
    head = sol.insertAtPosition(head,15,6); // Print the list
    ListNode* temp = head;
    while (temp != NULL) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
