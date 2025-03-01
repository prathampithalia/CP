class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        int n = points.size();
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n; i++) {
            p[i].first = points[i][0];
            p[i].second = points[i][1];
        }

        sort(p.begin(), p.end());

        int ans = 1;
        int cur = p[0].second;
        for (int i = 1; i < n; i++) {
            if (p[i].first > cur) {
                cur = p[i].second;
                ans++;
            }
            else cur = min(cur, p[i].second);
        }

        return ans;
    }
};