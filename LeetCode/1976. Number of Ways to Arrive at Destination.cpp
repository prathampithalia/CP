
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {

        vector<pair<int, int>> adj[n];
        for (auto i : roads) {
            adj[i[0]].push_back({ i[2], i[1] });
            adj[i[1]].push_back({ i[2], i[0] });
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>,
            greater<pair<int, int>>>
            pq;

        pq.push({ 0, 0 });
        vector<long long> dist(n, INT_MAX), ways(n);

        dist[0] = 0;
        ways[0] = 1;

        int M = (1e9 + 7);

        while (!pq.empty()) {
            int node = pq.top().second;
            int wt = pq.top().first;

            pq.pop();

            for (auto next : adj[node]) {
                int distance = next.first;
                int nxtNode = next.second;

                if (wt + distance < dist[nxtNode]) {
                    dist[nxtNode] = (wt + distance) % M;
                    pq.push({ dist[nxtNode], nxtNode });
                    ways[nxtNode] = ways[node];
                }
                else if (wt + distance == dist[nxtNode]) {
                    ways[nxtNode] = (ways[nxtNode] + ways[node]) % M;
                }
            }
        }
        return ways[n - 1] % M;
    }
};