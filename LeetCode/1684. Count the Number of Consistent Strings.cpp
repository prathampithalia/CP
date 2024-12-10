class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> a;
        for (auto i : allowed)
            a[i]++;

        int cnt = 0;
        for (auto j : words) {
            bool ok = true;
            for (auto i : j) {
                if (a.find(i) == a.end()) {
                    ok = false;
                    break;
                }
            }
            cnt += ok;
        }

        return cnt;
    }
};