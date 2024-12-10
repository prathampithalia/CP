class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int> req(n);

        for (int i = 0;i < n; i++) {
            req[i] = capacity[i] - rocks[i];
        }

        sort(req.begin(), req.end());
        int ans = 0;
        for (auto i : req) {
            if (additionalRocks >= i) {
                additionalRocks -= i;
                ans++;
            }
            else return ans;
        }
        return ans;

    }
};