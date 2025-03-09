class Solution {
public:
    int maxLen(vector<int>& arr) {
        // code here

        int n = arr.size();
        unordered_map<int, int> mp;
        int sum = 0, len = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (sum == 0) {
                len = i + 1;

            }
            else {
                if (mp.find(sum) != mp.end()) {
                    len = max(len, i - mp[sum]);
                }
                else {
                    mp[sum] = i;
                }
            }
        }

        return len;
    }
};