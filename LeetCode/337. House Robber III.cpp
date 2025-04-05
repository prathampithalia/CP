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
class Solution {
public:
    unordered_map<TreeNode*, int> dp;

    int solve(TreeNode* root) {
        if (root == NULL) return 0;

        if (dp.count(root)) return dp[root];

        int take = root->val;
        int notTake = 0;

        if (root->left) {
            notTake += solve(root->left);
            if (root->left->left) take += solve(root->left->left);
            if (root->left->right) take += solve(root->left->right);
        }

        if (root->right) {
            notTake += solve(root->right);
            if (root->right->left) take += solve(root->right->left);
            if (root->right->right) take += solve(root->right->right);
        }

        return dp[root] = max(take, notTake);
    }

    int rob(TreeNode* root) {
        return solve(root);
    }
};
