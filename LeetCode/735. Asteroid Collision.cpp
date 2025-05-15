class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {

        vector<int> ans;

        stack<int> s;
        int n = a.size();

        for (int i = 0; i < n; i++) {
            if (s.size() == 0)
                s.push(a[i]);
            else {

                if (s.top() > 0) {
                    if (a[i] > 0)
                        s.push(a[i]);
                    else {
                        if (s.size() && abs(a[i]) > s.top()) {

                            while (s.size() && s.top() > 0 &&
                                abs(a[i]) > s.top())
                                s.pop();
                            if (s.size() == 0)
                                s.push(a[i]);
                            else if (abs(a[i]) > s.top())
                                s.push(a[i]);
                        }
                        if (s.size() && abs(a[i]) == s.top())
                            s.pop();
                    }
                }
                else {
                    s.push(a[i]);
                }
            }
        }
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};