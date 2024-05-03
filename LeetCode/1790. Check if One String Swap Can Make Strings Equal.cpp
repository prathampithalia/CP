class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        int n = s2.size();
        int p1 = 0, p2 = 0, cnt = 0;

        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                cnt++;
                if (cnt == 1) {
                    p1 = i;
                }
                if (cnt == 2) {
                    p2 = i;
                }
                if (cnt > 2)
                    return false;
            }
        }

        // swap(s1[p1], s1[p2]);

        // if (s1 == s2) {
        //     return true;
        // }
        // return false;

        if( s1[p2] == s2[p1]  && s1[p1] == s2[p2]) return true;
        return false;
    }
};