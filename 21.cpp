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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* res = head;
        while(l1 && l2)
        {
            ListNode* node = new ListNode(0);
            if(l1->val > l2->val)
            {
                node->val = l2->val;
                l2 = l2->next;
            }
            else
            {
                node->val = l1->val;
                l1 = l1->next;
            }
            node->next = head->next;
            head->next = node;
            head = head->next;
        }
        while(l1)
        {
            ListNode* node = new ListNode(0);
            node->val = l1->val;
            l1 = l1->next;
            node->next = head->next;
            head->next = node;
            head = head->next;
        }
        while(l2)
        {
            ListNode* node = new ListNode(0);
            node->val = l2->val;
            l2 = l2->next;
            node->next = head->next;
            head->next = node;
            head = head->next;
        }
        return res->next;
    }
};
