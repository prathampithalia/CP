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

void solve(TreeNode* root, vector<int>& v, int l) {
    if (root == NULL)
        return;

    if (l == v.size()) {
        v.push_back(root->val);
    }
    solve(root->left, v, l + 1);
    solve(root->right, v, l + 1);
}

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        vector<int> levelVal;
        solve(root, levelVal, 0);
        // Runtime : 0ms
        return levelVal[levelVal.size() - 1];
    }
};


// Runtime : 7ms 

// class Solution {
// public:
//     int findBottomLeftValue(TreeNode* root) {

//         map<int,int> mp;
//         queue<pair<TreeNode* , int>> q;

//         mp[0] = root->val ;
//         q.push({root , 0});

//         while(!q.empty()){
//             auto it = q.front().first ;
//             auto level = q.front().second;

//             q.pop();

//             if(mp.find(level)== mp.end())mp[level] = it->val ;
//             if( it->left ){
//                 q.push({it->left,  level + 1});
//             }
//             if( it->right ){
//                 q.push({it->right , level + 1});
//             }
//         }

//         return mp[mp.size() -1 ];
//     }
// };