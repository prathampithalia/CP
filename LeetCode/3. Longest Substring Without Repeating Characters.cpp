// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {

//         unordered_map<char, int> v;
//         int n = s.size();
//         int ans = 0;
//         for (int i = 0; i < n; i++) {
//             int j = i;
//             while (j < n) {
//                 if (v.find(s[j]) == v.end()) {
//                     v[s[j]]++;
//                     j++;
//                 } else {
//                     v.clear();
//                     break;
//                 }
//             }
//             ans = max(ans, j - i);
//         }
//         return ans ;
//     }
// };


class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mp;

        int n = s.size();

        int l = 0, r = 0;
        int cnt = 0, ans = 0;
        while (r < n) {
            if (mp.find(s[r]) != mp.end()) {
                l = max(l, mp[s[r]] + 1);
            }
            mp[s[r]] = r;

            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};