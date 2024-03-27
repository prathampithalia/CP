int count(vector<int>& nums, int k) {
    int cnt = 0;

    unordered_map<int, int> v;
    int l = 0, r = 0, ans = 0, n = nums.size();
    //  ans1 = subarrays with k diff integer , ans2= k - 1 diff int
    while (r < n) {
        if (v.find(nums[r]) == v.end()) {
            v[nums[r]] = 1;
        }
        else
            v[nums[r]]++;

        while (v.size() > k) {
            v[nums[l]]--;
            if (v[nums[l]] == 0) {
                v.erase(nums[l]);
            }
            l++;
        }
        ans += r - l + 1;
        r++;
    }

    return ans;
}

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);

        return count(nums, k) - count(nums, k - 1);
    }
};