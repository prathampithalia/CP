class Solution {
public:
    int maxSum(vector<int>& nums) {
        map<int, int> mp;
        int ans = 0;
        int neg = INT_MIN;
        for (auto i : nums) {
            if (i <= 0)neg = max(neg, i);
            if (mp.find(i) == mp.end() && i >= 0)ans += i;
            mp[i]++;
        }
        if (ans == 0) return neg;

        return ans;
    }
};