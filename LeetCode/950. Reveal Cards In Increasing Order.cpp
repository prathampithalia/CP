class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.rbegin(), deck.rend());

        vector<int> a;
        int n = deck.size();
        a.push_back(deck[0]);
        for (int i = 1; i < n; i++) {
            a.push_back(deck[i]);
            int t = a.front();
            a.erase(a.begin());
            a.push_back(t);
        }
        int ls = a.back();
        a.pop_back();
        reverse(a.begin(), a.end());
        a.push_back(ls);

        return a;
    }
};