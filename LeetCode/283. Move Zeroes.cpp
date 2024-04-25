class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        vector<int> cop;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                cop.push_back(nums[i]);
            }
            else
                cnt++;
        }

        while (cnt--)
            cop.push_back(0);

        nums.clear();
        nums = cop;
    }
};