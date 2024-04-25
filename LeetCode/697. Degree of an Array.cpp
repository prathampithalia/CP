class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int n = nums.size();
        unordered_map<int, int> v;
        int deg = INT_MIN, val = 0;
        for (int i = 0; i < n; i++) {
            v[nums[i]]++;
            deg = max(deg, v[nums[i]]);
        }

        // cout << deg << endl;

        vector<pair<int, int>> ln;
        for (auto i : v) {
            int f1 = INT_MAX, f2 = 0;
            if (i.second == deg) {
                for (int j = 0; j < n; j++) {
                    if (nums[j] == i.first) {
                        f1 = min(f1, j);
                        f2 = max(f2, j);
                    }
                }
                ln.push_back({f1, f2 + 1});
            }
        }

        int ans = INT_MAX;
        for (auto i : ln) {
            ans = min(ans, i.second - i.first);
        }

        return ans;
    }
};