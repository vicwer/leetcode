/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool compare(TreeNode* p, TreeNode* q) {
        if(!p && !q)
        {
            return true;
        }
        if(p && q && p->val == q->val)
        {
            return compare(p->left, q->right) && compare(p->right, q->left);
        }
        else
        {
            return false;
        }
    }

    bool isSymmetric(TreeNode* root) {
        if(!root)
        {
            return true;
        }
        return compare(root->left, root->right);
    }
};
