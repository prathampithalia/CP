class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.find(part) != s.npos) {
            s.erase(s.find(part), part.size());
        }
        return s;
    }
};