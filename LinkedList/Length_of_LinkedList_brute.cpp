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
int lengthOfLinkedList(ListNode* head) {
    ListNode* temp = head;
    int cnt = 0;
    while (temp != NULL) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main() {
    vector<int> arr = {2, 5, 8, 7};
    ListNode* head = new ListNode(arr[0]);
    head->next = new ListNode(arr[1]);
    head->next->next = new ListNode(arr[2]);
    head->next->next->next = new ListNode(arr[3]);
    cout <<"The length of the Linkedlist = "<<lengthOfLinkedList(head) << '\n';
}