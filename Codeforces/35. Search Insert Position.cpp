class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size(), l = 0, r = n - 1;
        int mid = l + (r - l) / 2, ans = -1;



        while (l <= r) {
            if (nums[mid] == target) {
                ans = mid;
                break;
            }
            else if (nums[mid] > target) r = mid - 1;
            else l = mid + 1;

            mid = l + (r - l) / 2;
        }

        if (ans == -1)
            ans = lower_bound(nums.begin(), nums.end(), target) - nums.begin();


        return ans;




    }
};