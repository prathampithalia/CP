class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        // vector<int> ind(26);

        unordered_map<char, int> ind;
        for (int i = 0; i < n; i++) {
            ind[s[i]] = i;
        }

        vector<int> ans;
        int st = 0, end = 0;
        // SLIDING WINDOW
        for (int i = 0; i < n; i++) {
            end = max(end, ind[s[i]]);
            if (i == end) {
                ans.push_back(end - st + 1);
                st = i + 1;
            }
        }
        return ans;
    }
};