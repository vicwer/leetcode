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
        ListNode* end = new ListNode(0);
        ListNode* head = end;
        int val = 0;
        while(l1 || l2 || val)
        {
            int num = 0;
            if(l1)
            {
                num += l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                num += l2->val;
                l2 = l2->next;
            }

            num += val;
            end->val = num % 10;
            val = num / 10;

            if(l1 || l2 || val)
            {
                ListNode* tmp = new ListNode(0);
                end->next = tmp;
                end = end->next;
            }
        }
        return head;
    }
};
