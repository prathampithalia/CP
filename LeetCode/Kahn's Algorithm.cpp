class Solution {
public:

    // Kahn's Algorithm
    vector<int> topoSort(int V, vector<vector<int>>& edges) {

        vector<int> indegree(V);
        stack<int>st;
        vector<int> adj[V];
        for (auto i : edges) {
            adj[i[0]].push_back(i[1]);
        }

        for (int i = 0; i < V; i++) {
            for (auto node : adj[i]) {
                indegree[node]++;
            }
        }
        vector<int> ans;
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) {
                st.push(i);
            }
        }
        while (!st.empty()) {
            int node = st.top();
            st.pop();
            ans.push_back(node);
            for (auto next : adj[node]) {
                indegree[next]--;
                if (indegree[next] == 0)st.push(next);
            }
        }
        return ans;
    }
};