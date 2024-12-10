class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int x = 0;
        int n = nums1.size(), m = nums2.size();
        if (!(m & 1) && !(n & 1)) {
            return 0;
        }
        if ((n & 1) && !(m & 1)) {
            for (auto i : nums2) x ^= i;
        }
        else if (!(n & 1) && (m & 1)) {
            for (auto i : nums1) x ^= i;
        }
        else {
            for (auto i : nums1) x ^= i;
            for (auto i : nums2) x ^= i;

        }

        return x;

    }
};