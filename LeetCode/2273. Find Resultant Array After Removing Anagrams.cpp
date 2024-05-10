class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string> ans;

        vector<int> t(n);

        string a = words[0];

        for (int i = 1; i < n; i++) {
            vector<int> fa(26), fb(26);

            for (auto j : a) { fb[j - 'a']++; }
            for (auto j : words[i]) { fa[j - 'a']++; }
            bool ana = true;
            for (int j = 0;j < 26;j++) {
                if (fa[j] != fb[j])ana = false;
            }
            if (ana) {
                t[i] = 1;
            }
            else {
                a = words[i];
            }
        }

        for (int i = 0;i < n; i++) {
            if (t[i] == 0)ans.push_back(words[i]);
        }
        return ans;
    }
};