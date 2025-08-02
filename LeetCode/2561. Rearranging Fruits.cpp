class Solution {
public:
    long long minCost(vector<int>& b1, vector<int>& b2) {

        unordered_map<int, int> check;
        unordered_map<int, int> m1, m2;
        long long mini = LLONG_MAX;
        for (int i = 0; i < b1.size(); i++) {
            check[b1[i]]++;
            check[b2[i]]++;
            m1[b1[i]]++;
        }

        for (auto& i : check) {
            mini = min(mini, (long long)i.first);
            if (i.second & 1)
                return -1;
            else
                i.second /= 2;
        }

        vector<long long> extra;

        for (auto i : check) {
            int ex = i.second - m1[i.first];
            for (int j = 0; j < abs(ex); j++) {
                extra.push_back(i.first);
            }
        }

        sort(extra.begin(), extra.end());
        long long ans = 0;
        for (int i = 0; i < extra.size() / 2; i++) {
            ans += min(2 * mini, extra[i]);
        }
        return ans;
    }
};