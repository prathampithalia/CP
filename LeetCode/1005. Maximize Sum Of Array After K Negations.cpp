class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int neg = 0, zero = 0, zind = 0, n = nums.size(), pos = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                neg++;
            } else if (nums[i] == 0) {
                zero++;
                zind = i;
            } else {
                pos = i;
                break;
            }
        }

        int ans = 0;

        if (neg != 0) {

            // all negative
            if (pos == 0) {
                for (int i = 0; i < n; i++) {
                    if (k != 0) {
                        nums[i] *= -1;
                        k--;
                    }
                }
                if (k != 0) {
                    while (k--) {
                        nums[n - 1] *= -1;
                    }
                }

                for (int i = 0; i < n; i++)
                    ans += nums[i];
            }

            //  both negative and zero present
            else if (zero != 0) {
                for (int i = 0; i <= zind; i++) {
                    if (k != 0) {
                        nums[i] *= -1;
                        k--;
                    }
                }
                for (int i = 0; i < n; i++) {
                    ans += nums[i];
                }
            }

            //  negative & positive and no zero 
            else {
                for (int i = 0; i < pos; i++) {
                    if (k != 0) {
                        nums[i] *= -1;
                        k--;
                    } else
                        break;
                }

                if (k != 0) {
                    if (nums[pos] < abs(nums[pos - 1]))
                        pos++;
                }

                while (k--)
                    nums[pos - 1] *= -1;

                for (int i = 0; i < n; i++) {
                    ans += nums[i];
                }
            }

        } else {
            if (zero != 0) {
                for (int i = 0; i < n; i++)
                    ans += nums[i];
            } else {
                while (k--)
                    nums[0] *= -1;

                for (int i = 0; i < n; i++)
                    ans += nums[i];
            }
        }
        return ans;
    }
};