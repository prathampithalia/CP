class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& pre) {
        vector<int> in(N);
        vector<int> adj[N];

        for (auto i : pre) {
            adj[i[1]].push_back(i[0]);
        }
        for (auto i : adj) {
            for (auto j : i)
                in[j]++;
        }

        vector<int> v;
        queue<int> q;
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (in[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int num = q.front();
            q.pop();
            cnt++;
            v.push_back(num);
            for (auto nxt : adj[num]) {
                in[nxt]--;
                if (in[nxt] == 0)
                    q.push(nxt);
            }
        }
        if (cnt == N)
            return v;

        return {};
    }
};