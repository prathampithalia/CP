class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int t = -1, k = INT_MAX;
        int n = nums.size();
        for (int i = 1; i < n - 1; i++) {
            t = max(t, nums[i] * nums[i + 1]);
            if (nums[0] < 0) {
                k = min(k, nums[i] * nums[i + 1]);
            }
        }

        if (nums[0] < 0) return nums[0] * k;
        return nums[0] * t;

    }
};

// More simple Optimized Code
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());

        int product1 = nums[0] * nums[1] * nums[size - 1]; 
        int product2 = nums[size - 1] * nums[size - 2] * nums[size - 3]; 

        return max(product1, product2);
    }
};