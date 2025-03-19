class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree(n + 1, 0), outDegree(n + 1, 0);

        for (auto i : trust) {
            inDegree[i[1]]++;
            outDegree[i[0]]++;
        }

        int ans = -1;
        for (int i = 1; i <= n; i++) {
            if (inDegree[i] == n - 1 && outDegree[i] == 0)
                ans = i;
        }

        return ans;
    }
};