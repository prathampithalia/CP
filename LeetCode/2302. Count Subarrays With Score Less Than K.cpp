class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {

        int move = 0, back = 0;
        long long tot = 0, res = 0;
        while (move < nums.size()) {

            tot += nums[move];
            while (back <= move && tot * (move - back + 1) >= k) {
                tot -= nums[back];
                back++;
            }
            res += (move - back + 1);
            move++;
        }
        return res;
    }
};