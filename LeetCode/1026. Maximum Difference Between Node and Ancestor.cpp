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
    int ans = 0;
    void solve(TreeNode* root, int mx, int mi) {
        if (root == NULL) {
            ans = max(ans, abs(mx - mi));
            return;
        }

        mx = max(mx, root->val);
        mi = min(mi, root->val);

        solve(root->left, mx, mi);
        solve(root->right, mx, mi);
    }
    int maxAncestorDiff(TreeNode* root) {
        int mx = INT_MIN;
        int mi = INT_MAX;
        solve(root, mx, mi);
        return ans;
    }
};