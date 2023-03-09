/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummynode = new ListNode(0);
        ListNode* current = dummynode;
        int Carry = 0, Sum;
        while (l1!= NULL || l2!= NULL || Carry != 0){
            int x = l1 ? l1-> val : 0;
            int y = l2 ? l2-> val : 0;
            Sum = x + y + Carry;
            Carry = Sum / 10;
            current->next = new ListNode(Sum%10);
            current = current->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return dummynode->next;
    }
};