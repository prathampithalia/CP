class Solution {
public:
    int countSegments(string s) {
        int ans = 0;
        int k = 0;
        if (s == "")
            return 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ')
                k++;
            else {
                if (k)
                    ans++;
                k = 0;
            }
        }
        if (k != 0)
            ans++;

        return ans;
    }
};