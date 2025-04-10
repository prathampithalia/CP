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
    bool ok = true;

    void solve(TreeNode* root, long mi, long mx) {
        if (root == NULL)
            return;
        if (root->val >= mx || root->val <= mi) {
            ok = 0;
            return;
        }

        solve(root->left, mi, root->val);
        solve(root->right, root->val, mx);
    }

    bool isValidBST(TreeNode* root) {
        solve(root, LONG_MIN, LONG_MAX);

        return ok;
    }
};