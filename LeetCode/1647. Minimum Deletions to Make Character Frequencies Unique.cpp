class Solution {
public:
    int minDeletions(string s) {


        vector<int> f(26);
        for (auto i : s) {
            f[i - 'a']++;
        }

        sort(f.rbegin(), f.rend());

        while (f.back() == 0)f.pop_back();

        vector<int> fc(f.begin(), f.end());

        int cnt = 0;
        for (int i = 1; i < f.size(); i++) {
            if (f[i] == f[i - 1] || f[i] > f[i - 1]) {
                f[i] = f[i - 1] - 1;
                if (f[i] < 0)f[i] = 0;
            }
        }

        for (int i = 0; i < f.size(); i++) {
            cnt += fc[i] - f[i];
        }


        return cnt;
    }
};