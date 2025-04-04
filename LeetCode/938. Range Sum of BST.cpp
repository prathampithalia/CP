/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

void solve(TreeNode* root, int l, int h, int& ans) {
    if (root == NULL)return;
    if (root->val >= l && root->val <= h)
        ans += root->val;
    solve(root->left, l, h, ans);
    solve(root->right, l, h, ans);
}

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        solve(root, low, high, ans);
        return ans;
    }
};