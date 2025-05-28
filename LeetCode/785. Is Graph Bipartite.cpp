class Solution {
public:
    bool dfs(int node, int col, vector<int>& color, vector<vector<int>>& v) {

        color[node] = col;

        for (auto nxt : v[node]) {
            if (color[nxt] == -1) {
                if (dfs(nxt, !col, color, v) == false)
                    return false;
            }
            else if (color[nxt] == col) {
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& v) {

        int n = v.size();

        vector<int> color(n, -1);

        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                if (dfs(i, 0, color, v) == false)
                    return false;
            }
        }

        return true;
    }
};