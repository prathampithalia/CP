class Solution {
public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        pq.push({ 0,0 });
        vector<int> vis(V);
        int sum = 0;
        while (!pq.empty()) {

            int wt = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if (vis[node]) continue;
            vis[node] = 1;
            sum += wt;
            for (auto it : adj[node]) {
                int nxt = it[0];
                int nxtWt = it[1];

                if (vis[nxt] == 0)pq.push({ nxtWt, nxt });
            }
        }
        return sum;
    }
};