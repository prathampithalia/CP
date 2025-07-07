class Solution {
public:

    /*

        NGR method :
                stack<pair<int, int>> s;
            int n = temp.size();

            vector<int> v;
            for (int i = n - 1; i >= 0; i--) {
                if (s.size() == 0) {
                    v.push_back(0);
                } else {
                    if (s.top().first > temp[i]) {
                        v.push_back(s.top().second);
                    } else {
                        while (s.size() && s.top().first <= temp[i])
                            s.pop();
                        if (s.size() == 0) {
                            v.push_back(0);
                        } else {
                            v.push_back(s.top().second);
                        }
                    }
                }
                s.push({temp[i], i});
            }

            reverse(v.begin(), v.end());
            for (int i = 0; i < n; i++) {
                if (v[i] != 0)
                    v[i] = v[i] - i;
            }
            return v;
    */
    vector<int> dailyTemperatures(vector<int>& temp) {

        int n = temp.size();
        vector<int> res(n);
        stack<int> s;
        for (int i = 0; i < n; i++) {
            while (!s.empty() && temp[s.top()] < temp[i]) {
                res[s.top()] = i - s.top();
                s.pop();
            }

            s.push(i);
        }
        return res;

    }
};