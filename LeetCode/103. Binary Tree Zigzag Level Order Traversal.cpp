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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        map<int, vector<int>> mp;
        queue<pair<TreeNode*, int>> q;
        if (root == NULL)return {};

        q.push({ root, 0 });

        while (!q.empty()) {
            auto it = q.front().first;
            auto level = q.front().second;
            q.pop();
            mp[level].push_back(it->val);
            if (it->left) {
                q.push({ it->left , level + 1 });
            }
            if (it->right) {
                q.push({ it->right , level + 1 });
            }

        }

        vector<vector<int>> v;
        for (auto i : mp) {
            vector<int> a(i.second.begin(), i.second.end());
            if (i.first & 1)reverse(a.begin(), a.end());

            v.push_back(a);
        }

        return v;

    }
};