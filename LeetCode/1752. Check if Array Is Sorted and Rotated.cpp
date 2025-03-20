class Solution {
public:
    bool check(vector<int>& nums) {
        int rot = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1])
                rot++;
            if (rot > 1) return false;
        }
        if (rot == 1) {
            if (nums[nums.size() - 1] > nums[0])
                return false;
        }
        return true;
    }
};