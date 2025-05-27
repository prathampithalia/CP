class Solution {
public:

    void helper(vector<vector<int>>& ans, vector<int> t, int start, vector<int>& vis) {


    }

    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here

        vector<vector<int>>ans;

        vector<int> adjList[V];
        for (auto i : edges) {
            adjList[i[0]].push_back(i[1]);
            adjList[i[1]].push_back(i[0]);
        }

        for (int v = 0;v < V; v++) {
            if (!vis[v]) {
                queue<int> q;
                q.push(v);
                vis[v] = 1;
                vector<int> temp;
                temp.push_back(v);
                while (!q.empty()) {
                    int val = q.front();
                    for (auto i : adjList[val]) {
                        if (!vis[i]) {
                            q.push(i);
                            vis[i] = 1;
                            temp.push_back(i);
                        }
                    }
                    q.pop();
                }
                ans.push_back(temp);
            }

        }

        return ans;

    }
};