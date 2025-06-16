class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> dp(n, 1), hash(n, 1);

        for (int i = 0; i < n; i++) {
            hash[i] = i;
            int mx = 0;
            for (int prev = 0; prev < i; prev++) {
                if (arr[i] % arr[prev] == 0 && 1 + dp[prev] > dp[i]) {
                    dp[i] = 1 + dp[prev];
                    hash[i] = prev;
                }
            }
        }
        int last = 0;
        int len = 0;
        for (int i = 0; i < n; i++) {
            if (dp[i] > len) {
                len = dp[i];
                last = i;
            }
        }
        vector<int> t;
        t.push_back(arr[last]);

        while (hash[last] != last) {
            last = hash[last];
            t.push_back(arr[last]);
        }

        reverse(t.begin(), t.end());

        return t;
    }
};
