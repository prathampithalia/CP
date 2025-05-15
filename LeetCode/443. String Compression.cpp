class Solution {
public:
    string add(string& s, int n) {

        string t = to_string(n);
        for (char i : t)
            s += i;
        return s;
    }
    int compress(vector<char>& s) {

        stack<char> t;
        t.push(s[0]);
        string a;
        for (int i = 1; i < s.size(); i++) {
            if (t.top() != s[i]) {
                if (t.size() == 1)
                    a += (t.top());
                else if (t.size() > 1) {
                    a += (t.top());
                    add(a, t.size());
                }
                while (!t.empty())
                    t.pop();
                t.push(s[i]);
            }
            else
                t.push(s[i]);
        }

        if (t.size() == 1)
            a += (t.top());
        else if (t.size() > 1) {
            a += (t.top());
            add(a, t.size());
        }
        s.clear();
        for (auto i : a)s.push_back(i);
        return s.size();
    }
};