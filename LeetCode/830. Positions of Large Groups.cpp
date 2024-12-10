class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n = s.size();
        multimap<char, vector<int>> mp;
        vector<vector<int>> ans;
        int st = n + 1, end = 0;
        char a;
        for (int i = 0; i < n; i++) {
            if (s[i] == s[i + 1]) {
                st = min(st, i);
                a = s[i];
                end = max(end, i + 1);
            }
            else {
                if (end - st >= 2) {
                    mp.insert({ a,{st,end} });
                }
                st = n + 1;
                end = i;
                a = s[i];
            }
        }

        for (auto i : mp) {
            cout << i.first << ' ' << i.second.front() << ' ' << i.second.back() << endl;
            ans.push_back({ i.second.front(), i.second.back() });
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};