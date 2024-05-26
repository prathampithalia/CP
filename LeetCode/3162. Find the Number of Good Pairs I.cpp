class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int ans = 0;

        for (auto i : nums2) {
            for (auto j : nums1) {
                if (j % (i * k) == 0) ans++;
            }
        }


        return ans;
    }
};