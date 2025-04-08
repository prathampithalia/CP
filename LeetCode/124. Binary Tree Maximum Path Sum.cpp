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
    int ans = INT_MIN;
    int solve(TreeNode* root) {
        if (root == NULL)
            return 0;

        int leftSum = max(0, solve(root->left));
        int rightSum = max(0, solve(root->right));

        ans = max(ans, leftSum + rightSum + root->val);

        return max(leftSum, rightSum) + root->val;
    }
    int maxPathSum(TreeNode* root) {

        solve(root);

        return ans;
    }
};