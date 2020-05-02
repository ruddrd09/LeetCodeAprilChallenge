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
    int rec(TreeNode* root, int& res) {
        if(!root) {
            return 0;
        }
        int l = rec(root->left, res);
        int r = rec(root->right, res);
        res = max(res, max(max(l,r) + root->val, max(root->val,l+r+root->val)));
        return max(root->val, root->val+max(l,r));
    }
    
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        rec(root, res);
        return res;
    }
};