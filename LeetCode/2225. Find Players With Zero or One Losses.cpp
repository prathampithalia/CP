class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);

        unordered_map<int, int> players, win, los;
        for (int i = 0; i < matches.size(); i++) {
            players[matches[i][0]] = 1;
            players[matches[i][1]] = 1;
            // los[matches[i][1]] = 1;
        }
        win = players;
        los = players;

        vector<vector<int>> ans(2);

        for (int i = 0; i < matches.size(); i++) {
            los[matches[i][1]]++;
            // win[matches[i][0]] = 0;
        }

        for (auto i : players) {
            if (los[i.first] == 1)
                ans[0].push_back(i.first);

            if (los[i.first] == 2)
                ans[1].push_back(i.first);
        }

        for (vector<int>& i : ans) {
            sort(i.begin(), i.end());
        }

        return ans;
    }
};