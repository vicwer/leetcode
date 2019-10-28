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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1)
        {
            return l2;
        }
        if(!l2)
        {
            return l1;
        }
        ListNode* l = new ListNode(0);
        ListNode* res = l;
        int val = 0;
        while(l1 && l2)
        {
            l->val = (l1->val + l2->val + val) % 10;
            val = (l1->val + l2->val + val) / 10;
            l1 = l1->next;
            l2 = l2->next;
            if(l1 && l2)
            {
                ListNode* tmp = new ListNode(0);
                // insert listNode
                l->next = tmp;
                l = l->next;
            }
        }
        while(l1)
        {
            if(val == 0)
            {
                l->next = l1;
                return res;
            }

            ListNode* tmp = new ListNode(0);
            l->next = tmp;
            l = l->next;
            l->val = (l1->val + val) % 10;
            val = (l1->val + val) / 10;
            l1 = l1->next;
        }
        while(l2)
        {
            if(val == 0)
            {
                l->next = l2;
                return res;
            }

            ListNode* tmp = new ListNode(0);
            l->next = tmp;
            l = l->next;
            l->val = (l2->val + val) % 10;
            val = (l2->val + val) / 10;
            l2 = l2->next;
        }
        if(val > 0)
        {
            ListNode* tmp = new ListNode(0);
            l->next = tmp;
            l->next->val = val;
        }
        return res;
    }
};
