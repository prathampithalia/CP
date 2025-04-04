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
    int maxLevelSum(TreeNode* root) {
        map<int, int> mp;
        // level , sum
        queue<pair<TreeNode*, int>> q;
        // TreeNode , level
        mp[0] = root->val;
        q.push({ root , 0 });

        while (!q.empty()) {
            auto it = q.front().first;
            auto level = q.front().second;
            q.pop();
            mp[level] += it->val;
            if (it->left) {
                q.push({ it->left , level + 1 });
            }
            if (it->right) {
                q.push({ it->right , level + 1 });
            }

        }
        int ans = INT_MAX, mx = INT_MIN;

        for (auto i : mp) {
            mx = max(mx, i.second);
        }
        for (auto i : mp) {
            if (mx == i.second) {
                ans = i.first;
                break;
            }
        }

        return ans + 1;

    }
};