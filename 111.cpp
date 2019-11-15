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
    int minDepth(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        return (root->left && root->right) ?
            min(minDepth(root->left), minDepth(root->right)) + 1 :
            1 + minDepth(root->left) + minDepth(root->right);
    }
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        if(!root->left)
        {
            return minDepth(root->right) + 1;
        }
        if(!root->right)
        {
            return minDepth(root->left) + 1;
        }
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
