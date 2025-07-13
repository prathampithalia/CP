class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {

        // multiset<int> ms;
        // for (auto i : trainers) {
        //     ms.insert(i);
        // }

        // sort(players.begin(), players.end());

        // int count = 0;
        // for (int i = 0; i < players.size(); i++) {

        //     auto it = ms.lower_bound(players[i]);
        //     if (it != ms.end()) {
        //         count++;
        //         ms.erase(ms.find(*it));
        //     }

        // }
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int count = 0;

        int i = 0, j = 0;
        int n = players.size(), m = trainers.size();

        while (i < n && j < m) {

            if (players[i] <= trainers[j]) {
                count++;
                i++;
            }
            j++;

        }
        return count;
    }
};