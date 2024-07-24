
bool patternCheck(string s, string p) {

    int n = s.size(), m = p.size();
    int i = 0, j = 0;
    while (i < n) {
        if (s[i] == p[j]) {
            i++;
            j++;
        }
        else {
            if (isupper(s[i]))
                return false;
            i++;
        }
    }

    if (j != m)
        return false;

    return true;
}

class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {

        int n = queries.size();
        vector<bool> ans(n);

        for (int i = 0; i < n; i++) {

            string s = queries[i];
            ans[i] = patternCheck(s, pattern);
        }

        return ans;
    }
};