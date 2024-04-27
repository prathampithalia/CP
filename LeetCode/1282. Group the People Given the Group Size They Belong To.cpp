class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();

        int N = 501;
        vector<vector<int>> ans;

        vector<vector<int>> v(N);

        for (int i = 0; i < n; i++) {

            v[groupSizes[i]].push_back(i);
        }

        for (int i = 0; i < N; i++) {

            if (v[i].size() != 0) {
                
                int k = v[i].size() / i;
                vector<int> t;
                for (int j = 0; j < v[i].size(); j++) {
                    
                    t.push_back(v[i][j]);
                    if (t.size() == i) {
                        ans.push_back(t);
                        t.clear();
                    }
                }
                if (t.size() == i)
                    ans.push_back(t);
            }
        }

        return ans;
    }
};