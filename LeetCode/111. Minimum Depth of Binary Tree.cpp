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
    int depth(TreeNode* root) {
        if (root == NULL) return 0;
        if (!root->left) return depth(root->right) + 1;
        if (!root->right) return depth(root->left) + 1;

        return (1 + min(depth(root->left), depth(root->right)));
    }
    int minDepth(TreeNode* root) {

        return depth(root);
    }
};