class Solution {
public:

    void dfs(int s, vector<int>& vis, vector<int> adj[]) {

        vis[s] = 1;
        for (auto j : adj[s]) {
            if (!vis[j])
            {
                dfs(j, vis, adj);
            }
        }


    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();
        vector<int> adj[n];

        for (int i = 0; i < n;i++) {
            for (int j = 0; j < n;j++) {
                if (isConnected[i][j] && i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> vis(n);

        // Total dfs call count 
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                cnt++;
                dfs(i, vis, adj);
            }
        }


        return cnt;


    }
};