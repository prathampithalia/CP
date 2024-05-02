class Solution {
public:
    int minSteps(string s, string t) {

        vector<int> fs(26), ft(26);

        for (auto i : s) {
            fs[i - 'a']++;
        }

        for (auto i : t) {
            ft[i - 'a']++;
        }

        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (fs[i] > ft[i])
                ans += fs[i] - ft[i];
        }
        return ans;
    }
};