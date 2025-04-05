/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool found = false;
    void solve(TreeNode* root, int tot, int target) {
        if (root == NULL)
            return;

        tot += root->val;
        if (!root->left && !root->right) {
            if (target == tot) {
                found = true;
            }
            return;
        }
        solve(root->left, tot, target);
        solve(root->right, tot, target);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;
        int tot = 0;
        found = false;
        solve(root, tot, targetSum);
        return (found);
    }
};