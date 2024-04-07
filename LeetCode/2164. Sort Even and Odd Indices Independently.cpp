class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int> a, b, ans(n);

        for (int i = 0; i < n; i++) {
            if (i & 1)
                a.push_back(nums[i]);
            else
                b.push_back(nums[i]);
        }

        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());

        int j = 0;
        for (int i = 1; i < n; i += 2) {
            ans[i] = a[j];
            j++;
        }
        j = 0;
        for (int i = 0; i < n; i += 2) {
            ans[i] = b[j];
            j++;
        }
        return ans ;
    }
};