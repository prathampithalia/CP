bool check(int upper, int lower, vector<int> colsum, vector<vector<int>> v) {

    int s1 = 0, s2 = 0;

    for (int i = 0; i < colsum.size(); i++) {
        s1 += v[0][i];
        s2 += v[1][i];

        if (v[0][i] + v[1][i] != colsum[i])
            return false;
    }

    if (s1 != upper || s2 != lower)
        return false;

    return true;
}

class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower,
        vector<int>& colsum) {

        int c = colsum.size();
        vector<vector<int>> v(2, vector<int>(c, 1));

        int u1 = 0, u2 = 0;

        for (int i = 0; i < c; i++) {
            if (colsum[i] == 2) {
                u1++;
                u2++;
            }
            else if (colsum[i] == 1) {

                if (u1 == upper) {
                    v[0][i] = 0;
                    u2++;
                }
                else if (u2 == lower) {
                    v[1][i] = 0;
                    u1++;
                }
                else if (lower - u2 < upper - u1) {
                    v[1][i] = 0;
                    u1++;
                }
                else {
                    v[0][i] = 0;
                    u2++;
                }
            }

            else {
                v[0][i] = 0;
                v[1][i] = 0;
            }
        }

        if (check(upper, lower, colsum, v))
            return v;
        else
            return {};
    }
};