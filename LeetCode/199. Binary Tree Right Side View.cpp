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
    void rightCall(TreeNode* root, int lvl, vector<int>& ans) {
        if (root == NULL)
            return;
        if (ans.size() == lvl) {
            ans.push_back(root->val);
        }
        rightCall(root->right, lvl + 1, ans);
        rightCall(root->left, lvl + 1, ans);
    }
    void leftCall(TreeNode* root, int lvl, vector<int>& ans) {
        if (root == NULL)
            return;
        if (ans.size() == lvl) {
            ans.push_back(root->val);
        }
        leftCall(root->left, lvl + 1, ans);
        leftCall(root->right, lvl + 1, ans);
    }
    vector<int> rightSideView(TreeNode* root) {

        if (root == NULL)
            return {};
        // map<int, vector<int>> mp;
        // queue<pair<TreeNode*, int>> q;

        // q.push({root, 0});
        // while (!q.empty()) {
        //     auto it = q.front().first;
        //     auto lvl = q.front().second;

        //     mp[lvl].push_back(it->val);

        //     q.pop();
        //     if (it->left)
        //         q.push({it->left, lvl + 1});
        //     if (it->right)
        //         q.push({it->right, lvl + 1});
        // }
        // vector<int> ans;
        // for (auto i : mp)
        //     ans.push_back(i.second.back());
        vector<int> ans;

        rightCall(root, 0, ans);
        return ans;
    }
};