class Solution {
public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {

        int M = 1e5;
        vector<int> dis(M, INT_MAX);
        queue<pair<int, int>> q;
        q.push({ 0,start });

        while (!q.empty()) {
            int step = q.front().first;
            int val = q.front().second;

            q.pop();
            if (val == end) {
                return step;
            }

            for (auto i : arr) {
                int num = (i * val) % M;
                if (1 + step < dis[num]) {
                    dis[num] = 1 + step;
                    q.push({ step + 1 , num });

                }
            }

        }
        return -1;
    }
};
