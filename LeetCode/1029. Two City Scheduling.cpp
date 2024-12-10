class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        int a = 0;
        for (int i = 0; i < n; i++)a += costs[i][0];
        vector<int> ref;
        for (int i = 0; i < n;i++)ref.push_back(costs[i][1] - costs[i][0]);

        sort(ref.begin(), ref.end());

        for (int i = 0; i < n / 2; i++) {
            a += ref[i];
        }
        return a;
    }
};