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

void solve(TreeNode* root, vector<int>& a, int x, int d) {
    if (root == NULL) {
        d--;
        return;
    }

    if ((root->left != NULL)) {
        if (root->left->val == x) {
            a.push_back(root->val);
            a.push_back(d);
            return;
        }
    }
    if ((root->right) != NULL) {
        if (root->right->val == x) {
            a.push_back(root->val);
            a.push_back(d);
            return;
        }
    }
    solve(root->left, a, x, d + 1);
    solve(root->right, a, x, d + 1);
}

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {

        if (root->val == x || root->val == y) return false;
        TreeNode* r1 = root;
        TreeNode* r2 = root;
        int d1 = 0, d2 = 0;
        vector<int> a, b;
        solve(r1, a, x, d1);

        solve(r2, b, y, d2);

        return (a[0] != b[0] && a[1] == b[1]);
    }
};