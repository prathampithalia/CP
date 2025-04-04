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

    vector<string> v;

    void solve(TreeNode* root, string ans) {
        if (root == NULL) return;

        if (!root->left && !root->right) {

            ans += 'a' + root->val;

            reverse(ans.begin(), ans.end());
            v.push_back(ans);

            ans.clear();
            return;

        }
        ans += 'a' + root->val;

        solve(root->left, ans);
        solve(root->right, ans);
    }

    string smallestFromLeaf(TreeNode* root) {

        string ans;
        if (root == NULL) return ans;

        solve(root, ans);
        sort(v.begin(), v.end());

        return v[0];
    }
};