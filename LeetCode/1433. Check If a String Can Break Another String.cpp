class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        vector<int> ok;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] > s2[i])ok.push_back(1);
            if (s1[i] < s2[i]) ok.push_back(0);
        }
        int m = ok.size();
        int tot = accumulate(ok.begin(), ok.end(), 0);
        if (tot == 0 || tot == m) return true;

        return false;

    }
};