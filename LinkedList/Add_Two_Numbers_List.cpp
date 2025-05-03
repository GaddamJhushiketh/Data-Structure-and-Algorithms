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
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* dummy = new ListNode(-1);
            ListNode* tail = dummy;
            int carry=0;
            while(l1!=NULL || l2!=NULL || carry)
            {
                int sum =0;
                if(l1!=NULL){
                sum += l1->val;
                l1=l1->next;}
                if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
                }
                sum += carry;
                carry = sum/10;
                ListNode* node = new ListNode( sum %10);
                tail ->next = node;
                tail = tail->next;
            }
            return dummy->next;
        }
};
int main()
{
    Solution s;
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    ListNode* result = s.addTwoNumbers(l1, l2);
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    return 0;
}