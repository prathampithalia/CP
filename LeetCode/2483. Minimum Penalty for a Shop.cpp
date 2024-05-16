class Solution {
public:
    int bestClosingTime(string customers) {
        string s = customers;
        int n = s.size();

        int Y = count(s.begin(), s.end(), 'Y');
        int N = count(s.begin(), s.end(), 'N');

        // Y at first , N at last 
        vector<int> p(n + 1);
        p[0] = Y;

        int mini = p[0];
        for (int i = 0;i < n; i++) {
            p[i + 1] = p[i] - (s[i] == 'Y' ? 1 : -1);

            mini = min(mini, p[i + 1]);
        }
        p.push_back(N);

        mini = min(mini, N);

        for (int i = 0; i <= n + 1;i++) {
            if (mini == p[i]) return i;
        }
        return n;
    }
};