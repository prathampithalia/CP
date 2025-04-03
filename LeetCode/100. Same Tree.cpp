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

bool solve(TreeNode* p, TreeNode* q) {
    if (p == NULL) return !q;
    if (q == NULL) return !p;

    return (p->val == q->val && (solve(p->left, q->left) && solve(p->right, q->right)));
}

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        return solve(p, q);
    }
};