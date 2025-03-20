void helper(vector<vector<int>> graph, int s, vector<int>& a,
    vector<vector<int>>& ans) {

    int n = graph.size();
    a.push_back(s);
    if (s == n - 1)
        ans.push_back(a);
    else {
        for (auto i : graph[s]) {
            helper(graph, i, a, ans);
        }
    }
    a.pop_back();
}

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        vector<vector<int>> ans;
        vector<int> a;
        helper(graph, 0, a, ans);

        return ans;
    }
};