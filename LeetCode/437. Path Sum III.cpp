class Solution {
public:
    int cnt = 0;

    void pathStartFrom(TreeNode* root, long long sum) {
        if (!root) return;
        if (root->val == sum) cnt++;
        pathStartFrom(root->left, sum - root->val);
        pathStartFrom(root->right, sum - root->val);
    }

    void solve(TreeNode* root, int target) {
        if (!root) return;
        pathStartFrom(root, target);
        solve(root->left, target);
        solve(root->right, target);
    }

    int pathSum(TreeNode* root, int targetSum) {

        solve(root, targetSum);
        return cnt;
    }
};
