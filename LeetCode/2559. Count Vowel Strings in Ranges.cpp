class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
        vector<vector<int>>& queries) {
        int n = words.size();
        unordered_set<char> vowels{ 'a','e','i','o','u' };

        vector<int> pref(n + 1);

        for (int i = 0; i < n; i++) {
            pref[i + 1] += (vowels.count(words[i].front()) &&
                vowels.count(words[i].back())) +
                pref[i];
        }

        vector<int> ans;
        for (auto i : queries) {
            int L = i[0], R = i[1];
            ans.push_back(pref[R + 1] - pref[L]);
        }
        return ans;
    }
};