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

int solve(TreeNode* root) {

    if (root == NULL) return 0;

    int lh = solve(root->left);
    int rh = solve(root->right);

    return 1 + max(lh, rh);
}
class Solution {
public:
    int maxDepth(TreeNode* root) {

        int ans = solve(root);
        return ans;
    }
};