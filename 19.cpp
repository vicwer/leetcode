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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* begin = head;
        ListNode* res = head;        
        
        while(head)
        {
            count++;
            head = head->next;
        }
        int idx = count - n;
        if(idx == 0)
        {
            return res->next;
        }
        int num = 0;
        while(begin)
        {
            if(num == idx - 1)
            {
                begin->next = begin->next->next;
                return res;
            }
            else
            {
                begin = begin->next;
                num++;
            }
        }
        return res;
    }
};

/* 快慢指针 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i = 0; i < n; i++)
        {
            fast = fast->next;
        }
        if(!fast)
        {
            return head->next;
        }
        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};
