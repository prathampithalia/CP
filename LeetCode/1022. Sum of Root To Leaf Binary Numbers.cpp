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
    vector<string> bits;

    void solve(TreeNode* root, string s) {
        if (root == NULL) {
            return;
        }
        s += to_string(root->val);
        if (!root->left && !root->right) {
            reverse(s.begin(), s.end());
            bits.push_back(s);
        }
        solve(root->left, s);
        solve(root->right, s);
    }

    int solve(TreeNode* root) {
        string s;
        solve(root, s);
        int ans = 0;

        for (auto i : bits) {
            for (int j = 0; j < i.size();j++) {
                ans += (i[j] - '0') * (1 << j);
            }
        }
        return ans;
    }
};

// Best SOLUTION

class Solution {
    int solve(TreeNode* root, int sum) {
        if (!root) return 0;
        sum = (2 * sum) + root->val;
        if (!root->left && !root->right) return sum;
        return solve(root->left, sum) + solve(root->right, sum);
    }
public:
    int solve(TreeNode* root) {
        return solve(root, 0);
    }

};