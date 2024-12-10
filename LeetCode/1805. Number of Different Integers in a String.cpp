class Solution {
public:
    int numDifferentIntegers(string word) {

        unordered_map<string, int> mp;

        string t = "";
        for (auto i : word) {
            if ((int)i <= 57 && (int)i >= 48) {
                t += i;
            }
            else {

                if (t.size() > 0) {
                    reverse(t.begin(), t.end());
                    while (t.back() == '0' && t.size() > 1)
                        t.pop_back();
                    reverse(t.begin(), t.end());
                    mp[t]++;
                }
                t = "";
            }
        }
        if (t.size() > 0) {
            reverse(t.begin(), t.end());
            while (t.back() == '0' && t.size() > 1)
                t.pop_back();
            reverse(t.begin(), t.end());
            mp[t]++;
        }
        return mp.size();
    }
};