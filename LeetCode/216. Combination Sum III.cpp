class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>> ans;

        for (int i = 0;i < (1 << 9) + 1;i++) {
            bitset<10> t(i);
            vector<int> v;
            int cnt = 0;
            for (int i = 0; i < 10; i++) {
                if (t[i] == 1) {
                    v.push_back(i + 1);
                    cnt += i + 1;
                }
            }
            if (cnt == n && v.size() == k) {
                ans.push_back(v);
            }
            // cout << t << endl;
        }

        return ans;

    }
};