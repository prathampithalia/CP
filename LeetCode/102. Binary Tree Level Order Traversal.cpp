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
    vector<vector<int>> levelOrder(TreeNode* root) {

        if (root == NULL)return {};
        map<int, vector<int>> mp;
        queue<pair<TreeNode*, int>> q;
        q.push({ root , 0 });

        vector<vector<int>> ans;

        while (!q.empty()) {
            auto it = q.front().first;
            auto lvl = q.front().second;
            q.pop();
            mp[lvl].push_back(it->val);
            if (it->left)q.push({ it->left,lvl + 1 });
            if (it->right) {
                q.push({ it->right,lvl + 1 });
            }
        }

        for (auto i : mp) {
            vector<int> v(i.second.begin(), i.second.end());
            ans.push_back(v);
        }

        return ans;

    }
};