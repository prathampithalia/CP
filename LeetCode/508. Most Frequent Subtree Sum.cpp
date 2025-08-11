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
    unordered_map<int, int> sum;
    int count = 0;
    int dfs(TreeNode* root) {
        if (root == NULL)return 0;
        // for all subtree SUM 
        int Sum = dfs(root->left) + dfs(root->right) + root->val;
        sum[Sum]++;
        count = max(count, sum[Sum]);
        return Sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int> ans;
        for (auto i : sum) {
            if (i.second == count) {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};