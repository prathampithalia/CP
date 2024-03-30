class Solution {
public:
    int numTeams(vector<int>& rating) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int ans = 0, n = rating.size();
        for (int i = 0; i < n; i++) {
            int l = i, r = i;
            int ls = 0, gr = 0;
            while (l--) {
                if (rating[l] < rating[i])
                    ls++;
            }
            while (r < n) {
                if (rating[r] > rating[i])
                    gr++;
                r++;
            }
            if (ls != 0 && gr != 0)
                ans += (gr * ls);

            l = i, r = i, ls = 0, gr = 0;
            while (l--) {
                if (rating[l] > rating[i])
                    ls++;
            }
            while (r < n) {
                if (rating[r] < rating[i])
                    gr++;
                r++;
            }
            if (ls != 0 && gr != 0)
                ans += (gr * ls);
        }

        return ans;
    }
};