class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> v;
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j < n) {
                if (v.find(s[j]) == v.end()) {
                    v[s[j]]++;
                    j++;
                } else {
                    v.clear();
                    break;
                }
            }
            ans = max(ans, j - i);
        }
        return ans ;
    }
};