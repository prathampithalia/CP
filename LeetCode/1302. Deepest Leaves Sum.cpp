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
    int depth(TreeNode* root) {
        if (root == NULL)
            return 0;

        int lh = depth(root->left);
        int rh = depth(root->right);

        return 1 + max(lh, rh);
    }

    int deepestLeavesSum(TreeNode* root) {
        int ans = 0;
        TreeNode* d = root;
        int height = depth(d);
        queue<pair<TreeNode*, int>> q;
        // Node , level
        q.push({ root, 0 });
        while (!q.empty()) {
            auto it = q.front().first;
            auto level = q.front().second;
            q.pop();

            if (level + 1 == height)
                ans += it->val;
            if (it->left)
                q.push({ it->left, level + 1 });
            if (it->right)
                q.push({ it->right, level + 1 });
        }
        return ans;
    }

};