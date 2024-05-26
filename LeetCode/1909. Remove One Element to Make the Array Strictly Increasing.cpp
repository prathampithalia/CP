bool is_sort(vector<int>& nums, int st) {

    bool p1 = true, p2 = true, ok = true;

    if (st == 0) {
        for (int i = 1; i < nums.size() - 1;i++) {
            if (nums[i] >= nums[i + 1]) p2 = false;
        }
    }
    else if (st == 1) {
        for (int i = st + 1; i < nums.size() - 1;i++) {
            if (nums[i] >= nums[i + 1]) p2 = false;
        }

        if (nums[0] >= nums[2]) ok = false;
    }
    else if (st == nums.size() - 1) {
        for (int i = 0; i < st - 1;i++) {
            if (nums[i] >= nums[i + 1]) p2 = false;
        }
    }
    else if (st == nums.size() - 2) {
        for (int i = 0; i < st - 1;i++) {
            if (nums[i] >= nums[i + 1]) p2 = false;
        }
        if (nums[st - 1] >= nums[st + 1]) ok = false;

    }
    else {

        for (int i = 0; i < st - 1; i++) {
            if (nums[i] >= nums[i + 1]) p1 = false;
        }
        for (int i = st + 1; i < nums.size() - 1; i++) {
            if (nums[i] >= nums[i + 1]) p1 = false;
        }

        if (nums[st - 1] >= nums[st + 1]) ok = false;

    }
    return (p1 && p2 && ok);


}


class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n = nums.size();
        bool ans = false;
        if (n == 2) return true;
        for (int i = 0; i < n; i++) {
            if (is_sort(nums, i)) ans = true;
        }
        return ans;

    }
};