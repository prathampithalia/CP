class Solution {
public:
    bool isValid(string s) {
        stack<int> t;

        int n = s.size();
        if (n == 1)
            return false;
        for (int i = 0; i < n; i++) {
            if (s[i] == ']') {
                if (t.size() == 0)
                    return false;
                if (t.top() != '[')
                    return false;
                else {
                    t.pop();
                }
            }
            else if (s[i] == ')') {
                if (t.size() == 0)
                    return false;

                if (t.top() != '(')
                    return false;
                else
                    t.pop();
            }
            else if (s[i] == '}') {
                if (t.size() == 0)
                    return false;

                if (t.top() != '{')
                    return false;
                else
                    t.pop();
            }
            else
                t.push(s[i]);
        }
        return t.size() == 0;
    }
};