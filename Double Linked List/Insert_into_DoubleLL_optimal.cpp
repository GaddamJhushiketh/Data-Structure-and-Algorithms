#include <iostream>
#include <vector>
using namespace std;
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
    ListNode* insertAtHead(ListNode* &head, int X) {
        ListNode* newnode = new ListNode(X);
        if(head != NULL)
        {
            head->prev = newnode;
        }
        newnode->next = head;
        newnode->prev = NULL;
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
        newnode->prev = temp;
        return head;
    }
    ListNode* insertAtPosition(ListNode* &head,int X,int pos)
    {
        ListNode* newnode = new ListNode(X);
        if(pos == 0)
        {   
            newnode->next = head;
            newnode->prev = NULL;
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
        if(temp->next != NULL) {
            temp->next->prev = newnode;
        }
        newnode->prev = temp;
        temp->next = newnode;
        return head;
    }
};
int main() {
    ListNode* head = NULL;
    Solution sol;
    head = sol.insertAtHead(head, 5);
    head = sol.insertAtEnd(head, 10);
    head = sol.insertAtPosition(head,20,1);
    head = sol.insertAtPosition(head,15,2);
    ListNode* temp = head;
    while (temp != NULL) {
        std::cout << temp->val << "<->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}