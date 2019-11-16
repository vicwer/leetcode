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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)
        {
            return NULL;
        }
        int lenA = 0;
        int lenB = 0;
        ListNode* A = headA;
        ListNode* B = headB;
        while(headB)
        {
            headB = headB->next;
            lenB++;
        }
        while(headA)
        {
            headA = headA->next;
            lenA++;
        }
        int diff = lenA - lenB;
        if(diff == 0)
        {
            while(A && B)
            {
                    if(A == B)
                    {
                        return A;
                    }
                    else
                    {
                        A = A->next;
                        B = B->next;
                    }
            }
        }
        else if(diff > 0)
        {
            while(A && B)
            {
                if(diff > 0)
                {
                    A = A->next;
                    diff--;
                }
                else
                {
                    if(A == B)
                    {
                        return A;
                    }
                    else
                    {
                        A = A->next;
                        B = B->next;
                    }
                }
            }
        }
        else
        {
            while(A && B)
            {
                if(diff < 0)
                {
                    B = B->next;
                    diff++;
                }
                else
                {
                    if(A == B)
                    {
                        return A;
                    }
                    else
                    {
                        A = A->next;
                        B = B->next;
                    }
                }
            }
        }
        return NULL;
    }
};