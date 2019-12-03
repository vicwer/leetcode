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
    bool isPalindrome(ListNode* head) {
        vector<int> ary;
        while(head)
        {
            ary.push_back(head->val);
            head = head->next;
        }

        int left = 0;
        int right = ary.size() - 1;
        while(left <= right)
        {
            if(ary[left] == ary[right])
            {
                left++;
                right--;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};
