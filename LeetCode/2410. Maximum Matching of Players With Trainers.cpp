class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {

        multiset<int> ms;
        for (auto i : trainers) {
            ms.insert(i);
        }

        sort(players.begin(), players.end());

        int count = 0;
        for (int i = 0; i < players.size(); i++) {

            auto it = ms.lower_bound(players[i]);
            if (it != ms.end()) {
                count++;
                ms.erase(ms.find(*it));
            }

        }
        return count;
    }
};