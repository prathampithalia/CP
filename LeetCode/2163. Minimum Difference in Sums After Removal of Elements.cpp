class Solution {
public:
    long long minimumDifference(vector<int>& nums) {

        int n = nums.size();
        int k = n / 3;

        vector<long long> leftMin(n), rightMax(n);

        priority_queue<int> maxPQ;

        long long leftSum = 0, rightSum = 0;
        for (int i = 0; i < k; i++) {
            leftSum += nums[i];
            maxPQ.push(nums[i]);
        }
        leftMin[k - 1] = leftSum;

        for (int i = k; i < n - k; ++i) {
            if (nums[i] < maxPQ.top()) {
                leftSum += nums[i] - maxPQ.top();
                maxPQ.pop();
                maxPQ.push(nums[i]);
            }
            leftMin[i] = leftSum;
        }

        priority_queue<int, vector<int>, greater<int>> minPQ;

        for (int i = n - 1; i >= n - k; i--) {
            rightSum += nums[i];
            minPQ.push(nums[i]);
        }

        rightMax[n - k] = rightSum;

        for (int i = n - k - 1; i >= k - 1; i--) {
            if (nums[i] > minPQ.top()) {
                rightSum += nums[i] - minPQ.top();
                minPQ.pop();
                minPQ.push(nums[i]);
            }
            rightMax[i] = rightSum;
        }

        long long minDiff = LLONG_MAX;
        for (int i = k - 1; i < n - k; ++i) {
            minDiff = min(minDiff, leftMin[i] - rightMax[i + 1]);
        }

        return minDiff;
    }
};