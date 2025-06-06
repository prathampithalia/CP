/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void markParent(TreeNode* root,
        unordered_map<TreeNode*, TreeNode*>& parents) {
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            if (cur->left) {
                parents[cur->left] = cur;
                q.push(cur->left);
            }
            if (cur->right) {
                parents[cur->right] = cur;
                q.push(cur->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parents;

        unordered_map<TreeNode*, bool> vis;

        markParent(root, parents);

        int count = 0;
        queue<TreeNode*> q;

        q.push(target);
        vis[target] = 1;
        while (!q.empty()) {
            int qsize = q.size();
            if (count == k)
                break;
            count++;
            while (qsize--) {
                TreeNode* cur = q.front();
                TreeNode* left = cur->left;
                TreeNode* right = cur->right;
                TreeNode* up = parents[cur];

                q.pop();
                if (left && !vis[left]) {
                    q.push(left);
                    vis[left] = 1;
                }
                if (right && !vis[right]) {
                    q.push(right);
                    vis[right] = 1;
                }
                //  upward Traversal
                if (up && !vis[up]) {
                    q.push(up);
                    vis[up] = 1;
                }
            }
        }

        vector<int> ans;
        while (!q.empty()) {
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};