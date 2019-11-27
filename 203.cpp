/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* res = new ListNode(0);
        res->next = head;
        ListNode* result = res;
        ListNode* tmp = res;
        while(res && res->next)
        {
            if(res->next->val == val)
            {
                res->next = res->next->next;
            }
            else
            {
                res = res->next;
            }
        }

        return result->next;
    }
};