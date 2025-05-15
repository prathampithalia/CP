class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {

        int n = a.size();
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < k; i++) {
            pq.push({ a[i], i });
        }
        vector<int> ans(n - k + 1);
        int open = 0, close = k - 1;
        int j = k;
        for (int i = 0; i < n - k + 1; i++) {
            int x = pq.top().first;
            int y = pq.top().second;
            while (pq.top().second < open) {

                pq.pop();
                x = pq.top().first;
                y = pq.top().second;
            }
            if (j < n)
                pq.push({ a[j], j });
            j++;

            if (y >= open && y <= close) {
                ans[i] = x;
            }


            // debug(ans, pq, open, close);
            open++;
            close++;
        }
        return ans;
    }
};