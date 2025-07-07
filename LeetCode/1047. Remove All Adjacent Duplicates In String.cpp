class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> t;

        int n = s.size();
        for (auto i : s) {
            if (t.size() == 0) {
                t.push(i);
            }
            else {
                if (i == t.top())t.pop();
                else {
                    t.push(i);
                }
            }
        }
        string a = "";
        while (t.size()) {
            a += t.top();
            t.pop();
        }
        reverse(a.begin(), a.end());

        return a;

    }
};