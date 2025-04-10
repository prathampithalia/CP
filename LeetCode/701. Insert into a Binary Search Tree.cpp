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
    TreeNode* r;

    void solve(TreeNode* root, int val) {
        if (root == NULL)
            return;
        if (val > root->val) {
            solve(root->right, val);
            if (root->right == NULL) {
                root->right = new TreeNode(val);
                return;
            }
        }
        else {
            solve(root->left, val);
            if (root->left == NULL) {
                root->left = new TreeNode(val);
                return;
            }
        }
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        r = root;
        if (root == NULL) {
            r = new TreeNode(val);
            return r;
        }
        solve(root, val);

        return r;
    }
};