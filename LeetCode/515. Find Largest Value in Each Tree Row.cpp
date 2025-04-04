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
    vector<int> largestValues(TreeNode* root) {

        if (root == NULL)
            return {};
        map<int, int> mp;
        queue<pair<TreeNode*, int>> q;
        q.push({ root, 0 });
        mp[0] = root->val;

        while (!q.empty()) {
            auto it = q.front().first;
            auto level = q.front().second;
            q.pop();
            if (mp.find(level) != mp.end()) {
                mp[level] = max(it->val, mp[level]);
            }
            else {
                mp[level] = it->val;
            }
            if (it->left) {
                q.push({ it->left, level + 1 });
            }
            if (it->right) {
                q.push({ it->right, level + 1 });
            }
        }
        vector<int> v(mp.size());
        for (auto i : mp) {
            v[i.first] = i.second;
        }
        return v;
    }
};