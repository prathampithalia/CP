class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {

        int k = (1 << maximumBit) - 1;

        int n = nums.size();
        vector<int> d(n);
        d[0] = nums[0];
        for (int i = 1; i < n;i++) {
            d[i] = nums[i] ^ d[i - 1];
        }

        for (int i = 0; i < n;i++) {
            d[i] = d[i] ^ k;
        }

        reverse(d.begin(), d.end());

        return d;



    }
};