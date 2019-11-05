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
    ListNode* swapPairs(ListNode* head) {
        ListNode* res = new ListNode(0);
        res->next = head;
        ListNode* out = res;
        while(res->next && res->next->next)
        {
            ListNode* cntNode = res->next->next;
            res->next->next = res->next->next->next;
            cntNode->next = res->next;
            res->next = cntNode;
            res = res->next->next;
        }
        return out->next;
    }
};
