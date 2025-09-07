class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int N = graph.size();
        vector<int> in(N);
        vector<int> adj[N];

        for (int i = 0; i < N; i++) {
            for (auto j : graph[i]) {
                adj[j].push_back(i);
                in[i]++;
            }
        }
        queue<int> q;
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (in[i] == 0)
                q.push(i);
        }
        vector<int> t;
        while (!q.empty()) {
            int num = q.front();
            q.pop();
            t.push_back(num);
            for (auto nxt : adj[num]) {
                in[nxt]--;
                if (in[nxt] == 0)
                    q.push(nxt);
            }
        }
        sort(t.begin(), t.end());
        return t;
    }
};

