class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {

        // we want kth index element in good
        // so we just take k as our start

        int left = k, right = k;
        int n = nums.size();
        int score = nums[left];
        int mini = nums[left];
        // max score is required

        while (left > 0 || right < n - 1) {

            if (left > 0 && right < n - 1) {
                if (nums[left - 1] >= nums[right + 1]) {
                    left--;
                }
                else right++;
            }
            else if (left == 0 && right < n - 1) {
                right++;
            }
            else if (right == n - 1 && left > 0) {
                left--;
            }

            mini = min({ mini,nums[left],nums[right] });
            score = max(score, (mini * (right - left + 1)));

        }

        return score;

    }
};