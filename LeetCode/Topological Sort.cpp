class Solution {
public:

    void dfs(int node, stack<int>& st, vector<int>& vis, vector<int> adj[]) {
        vis[node] = 1;
        for (auto next : adj[node]) {
            if (!vis[next]) {
                dfs(next, st, vis, adj);
            }
        }
        st.push(node);
    }

    vector<int> topoSort(int V, vector<vector<int>>& edges) {

        stack<int> st;
        vector<int> vis(V);

        vector<int> adj[V];
        for (auto i : edges) {
            adj[i[0]].push_back(i[1]);
        }

        for (int i = 0;i < V; i++) {
            if (!vis[i]) {
                dfs(i, st, vis, adj);
            }
        }
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};