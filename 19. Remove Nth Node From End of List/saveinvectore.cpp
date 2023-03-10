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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector <ListNode*> Save;
        Save.push_back(head);
        ListNode *tmp = head;
        while (tmp && tmp->next){
            tmp = tmp-> next;
            Save.push_back(tmp);
        }
        if (Save.size() == 1){
            head = NULL;
        }else if (Save.size()-n == 0){
            head = head->next;
        }else
            Save[Save.size()-(n+1)]->next =  Save[Save.size()-(n)]-> next ;

        return head;
    }
};