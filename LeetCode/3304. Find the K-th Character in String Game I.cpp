class Solution {
public:
    char kthCharacter(int k) {

        string s = "a";
        while ((int)s.size() < k) {
            string next;
            for (char c : s) {
                next += (c == 'z') ? 'a' : c + 1;
            }
            s += next;
        }

        return s[k - 1];
    }
};

/*
    s = a
    next = b : s = ab

    s = ab
    next = bc  : this is s[0]nexts[1]next = bc
    s = ab+bc = abbc

    s = abbc
    next = bccd : we next each Si , i.e : s[0] next , s[1] next
    and then append
*/