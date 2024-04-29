class Solution {
public:
    int countElements(vector<int>& nums) {

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        int ans = 0;
        for (auto i : nums) {
            if (i != mini && i != maxi)
                ans++;
        }

        return ans;
    }
};