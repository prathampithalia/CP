class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());

        int totDays = 0;
        for (auto i : events) {
            totDays = max(totDays, i[1]);
        }

        priority_queue<int, vector<int>, greater<int>> pq;

        int n = events.size(), ind = 0, cnt = 0;

        for (int day = 1; day <= totDays; day++) {
            while (ind < n && events[ind][0] == day) {
                pq.push(events[ind][1]);
                ind++;
            }

            // cannot attend if Day passed , so remove
            while (pq.size() && pq.top() < day)pq.pop();

            if (pq.size()) {
                cnt++;
                pq.pop();
            }
        }
        return cnt;
    }
};