class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        int ans = 0;
        vector<int> p(n), s(n);
        p[0] = height[0];
        // MAX Prefix Array
        for (int i = 1; i < n; i++) {
            p[i] = max(p[i - 1], height[i]);
        }

        s[n - 1] = height[n - 1];

        // MAX Suffix Array
        for (int i = n - 2; i >= 0; i--) {
            s[i] = max(s[i + 1], height[i]);
        }

        for (int i = 0; i < n; i++) {
            if (height[i] < p[i] && height[i] < s[i])

                ans += min(p[i], s[i]) - height[i];
        }

        return ans;
    }
};