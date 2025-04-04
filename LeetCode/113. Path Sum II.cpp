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
    vector<vector<int>> v;

    void solve(TreeNode* root, vector<int>& a, int t) {
        if (root == NULL) {
            return;
        }

        a.push_back(root->val);
        if (root->left == NULL && root->right == NULL) {
            int tot = 0;
            for (auto i : a)
                tot += i;
            if (tot == t) {
                v.push_back(a);
            }
        }
        solve(root->left, a, t);
        solve(root->right, a, t);
        a.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        if (root == NULL)
            return v;

        vector<int> a;
        solve(root, a, targetSum);

        return v;
    }
};