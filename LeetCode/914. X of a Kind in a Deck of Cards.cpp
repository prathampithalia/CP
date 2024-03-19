class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {

        unordered_map<int, int> v;
        for (auto i : deck) {
            v[i]++;
        }

        int mx = 0;
        for (auto i : v)
            mx = max(mx, i.second);

        bool ans = false;

        for (int i = 2; i <= mx; i++) {
            bool div = true;
            for (auto j : v) {
                if (j.second % i != 0)
                    div = false;
            }
            if (div)
                ans = true;
        }

        return ans;
    }
};