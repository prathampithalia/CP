class Solution {
public:
    string customSortString(string order, string s) {
        int n = s.size();
        vector<int> t(n);

        string ans = "";
        for (int i = 0; i < order.size(); i++) {
            for (int j = 0; j < n; j++) {
                if (order[i] == s[j] && t[j] == 0) {
                    ans.push_back(s[j]);
                    t[j] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (t[i] == 0)
                ans.push_back(s[i]);
        }

        return ans;
    }
};