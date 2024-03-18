class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {

        sort(satisfaction.begin(), satisfaction.end());

        int n = satisfaction.size();

        int ans = INT_MIN;

        if (satisfaction[n - 1] < 0) return  0;

        for (int i = 0;i < n;i++) {
            int tot = 0;
            int lvl = 1;

            for (int j = i; j < n;j++) {
                tot += (satisfaction[j] * lvl);
                lvl++;
            }
            ans = max(ans, tot);
        }

        return ans;

    }
};