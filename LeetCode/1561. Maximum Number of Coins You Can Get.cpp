class Solution {
public:
    int maxCoins(vector<int>& piles) {

        sort(piles.begin(), piles.end());
        int ans = 0;
        if (piles.size() == 3) return piles[1];
        for (int i = piles.size() - 2; i >= piles.size() / 3; i -= 2) {
            ans += piles[i];
        }
        return ans;
    }
};