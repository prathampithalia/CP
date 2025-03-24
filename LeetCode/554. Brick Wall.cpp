class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {

        int n = wall.size();
        unordered_map<int, int> freq;
        int ans = 0;
        for (int row = 0; row < n; row++) {
            long long size = 0;
            for (int i = 0; i < wall[row].size() - 1; i++) {
                size += wall[row][i];
                freq[size]++;
                ans = max(ans, freq[size]);
            }
        }

        return n - ans;

    }
};