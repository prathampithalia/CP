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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
        queue<TreeNode*> q ;
        vector<long long> ans;
        q.push(root);
        while(!q.empty()){
            long long tot = 0 ;
            int size = q.size();
            for(int i = 0; i<size ; i++){
                auto X = q.front();
                tot +=X->val;
                q.pop();
                if( X->left){
                    q.push(X->left);
                }
                if( X->right){
                    q.push(X->right);
                }
            }
            ans.push_back(tot);
        }
        sort(ans.begin(),ans.end());
            for(auto i : ans)cout <<i <<' ';
        if( k>ans.size()) return  -1 ;
        return (ans[ans.size() - k]) ;
    }
};