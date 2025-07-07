class Solution {
public:
    string removeDuplicates(string word, int k) {

        stack<pair<char, int>> s;


        for (auto i : word) {
            if (s.size() && s.top().first == i) {
                s.top().second++;
            }
            else {
                s.push({ i,1 });
            }
            if (s.top().second == k) {
                s.pop();
            }
        }

        string a = "";
        while (s.size()) {
            for (int times = 0; times < s.top().second; times++) a += s.top().first;
            s.pop();
        }
        reverse(a.begin(), a.end());
        return a;
    }
};