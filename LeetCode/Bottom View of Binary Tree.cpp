class Solution {
public:
    vector <int> bottomView(Node* root) {
        // Your Code Here
        map<int, int> mp;
        queue<pair<Node*, int>> q;

        q.push({ root , 0 });
        while (!q.empty()) {
            auto it = q.front().first;
            auto lvl = q.front().second;
            mp[lvl] = it->data;

            q.pop();
            if (it->left)q.push({ it->left , lvl - 1 });
            if (it->right)q.push({ it->right , lvl + 1 });

        }
        vector<int> ans;
        for (auto i : mp)ans.push_back(i.second);
        return ans;
    }
};