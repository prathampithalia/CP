class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector<pair<int, int>> adj[n];

        for (auto i : flights) {
            adj[i[0]].push_back({ i[2] , i[1] });
        }

        vector<int> distn(n, INT_MAX);

        queue<pair<int, pair<int, int>>> q;
        // step , dis , node 

        q.push({ 0 , {0,src} });
        distn[src] = 0;
        while (!q.empty()) {
            int step = q.front().first;
            int dis = q.front().second.first;
            int node = q.front().second.second;
            q.pop();
            if (step > k) continue;

            for (auto i : adj[node]) {
                int wt = i.first;
                int val = i.second;
                if (wt + dis < distn[val]) {
                    distn[val] = wt + dis;
                    q.push({ step + 1 , {wt + dis , val} });
                }
            }

        }
        if (distn[dst] != INT_MAX) return distn[dst];
        return -1;
    }
};