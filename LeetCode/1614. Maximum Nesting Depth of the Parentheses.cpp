class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, tot = 0;
        for (int i = 0;i < s.size(); i++) {
            if (s[i] == '(')tot += 1;
            if (s[i] == ')')tot -= 1;

            ans = max(ans, tot);
        }
        return ans;
    }
};