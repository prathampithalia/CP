class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();

        unordered_map<int, int> v;
        for (auto i : hand)v[i]++;

        sort(hand.begin(), hand.end());

        for (int i = 0; i < n; i++) {
            if (v[hand[i]] == 0) continue;

            for (int j = 0; j < groupSize; j++) {
                int fnd = hand[i] + j;

                if (v[fnd] == 0) return false;

                v[fnd]--;
            }
        }
        return  true;
    }
};