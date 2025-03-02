class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        for (auto i : s)mp[i]++;

        int ans = 0, single = 0, odd = 0, even = 0;
        for (auto i : mp) {
            if (i.second == 1)single++;
            else if (i.second & 1) {
                ans += i.second - 1;
                odd++;
            }
            else if (i.second % 2 == 0)ans += i.second;
        }

        if (odd) ans += 1;
        else
            ans += (bool)single;

        return ans;
    }
};