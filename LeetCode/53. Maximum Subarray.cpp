#define ll long long

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ll int a = 0;
        int n = nums.size();
        ll ans = -1e18;
        ll maxi = -1e18;

        for (int i = 0; i < n; ++i) {
            a += nums[i];
            maxi = max(a, maxi);

            if (a < 0)
                a = 0;
        }
        return maxi;
    }
};