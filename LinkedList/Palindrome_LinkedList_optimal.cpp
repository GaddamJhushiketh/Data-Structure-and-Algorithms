#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = nullptr;
        while (slow) {
            ListNode* temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        ListNode* first = head;
        ListNode* second = prev;
        while (second) {
            if (first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }
        return true;
    }
};

int main() {
    // Creating the linked list: 1 -> 2 -> 2 -> 1
    ListNode* node4 = new ListNode(1);
    ListNode* node3 = new ListNode(2, node4);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* head = new ListNode(1, node2);
    Solution sol;
    bool result = sol.isPalindrome(head);
    if (result) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
