class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> p(n + 1);


        for (int i = 1; i <= n; i++) {
            p[i] = p[i - 1] ^ arr[i - 1];
        }


        vector<int> ans;

        for (int i = 0; i < queries.size(); i++) {
            ans.push_back(p[queries[i][0]] ^ p[queries[i][1] + 1]);
        }
        return ans;
    }
};