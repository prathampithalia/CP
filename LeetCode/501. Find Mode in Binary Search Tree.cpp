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
    vector<int> ans;
    int mx = 0;
    unordered_map<int, int> mp;
    void solve(TreeNode* root) {
        if (root == NULL)
            return;
        mp[root->val]++;

        mx = max(mx, mp[root->val]);

        solve(root->left);
        solve(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        solve(root);

        for (auto i : mp) {
            if (i.second == mx)
                ans.push_back(i.first);
        }
        return ans;
    }
};