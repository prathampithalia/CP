class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {

        long long operations = 0;
        long long inc = 0, dec = 0;

        for (int i = 0; i < nums.size(); i++) {

            int diff = target[i] - nums[i];

            if (diff > 0) {
                if (inc < diff) {
                    operations += (diff - inc);
                }
                inc = diff;
                dec = 0;
            }
            else if (diff < 0) {
                if (diff < dec) {
                    operations += (-diff + dec);
                }
                dec = diff;
                inc = 0;
            }
            else {
                inc = 0;
                dec = 0;
            }
        }
        return operations;
    }
};