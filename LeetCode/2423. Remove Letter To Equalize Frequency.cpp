class Solution {
public:
    bool equalFrequency(string word) {

        //  charachter frequency

        unordered_map<char, int> t;
        for (char i : word) {
            t[i]++;
        }

        vector<int> f;
        // vector containing frequency

        for (auto i : t) {
            f.push_back(i.second);
        }

        // freuency of each element of f ;

        unordered_map<int, int> tt;
        for (auto i : f) {
            tt[i]++;
        }

        // debug(t,tt);

        if (tt.size() == 1) {
            int n1, n2;
            for (auto i : tt) {
                n1 = i.first;
                n2 = i.second;
            }
            if (n1 == 1 || n2 == 1)
                return true;

            return false;
        }
        else if (tt.size() == 2) {
            int a1 = 0, a2 = 0, b1 = 0, b2 = 0, ps = 0;
            for (auto i : tt) {
                if (ps == 0) {
                    a1 = i.first;
                    a2 = i.second;
                    ps++;
                }
                else {
                    b1 = i.first;
                    b2 = i.second;
                }
            }
            // debug(a1,a2,b1,b2);
            auto itr2 = tt.begin();
            auto itr1 = tt.begin();
            itr2++;
            if ((itr1->first - itr2->first == 1 &&
                itr1->second == 1) || // if the diff b/w freq is 1 and the no.
                // of char comes once
                (itr2->first - itr1->first == 1 && itr2->second == 1) ||
                (itr1->first == 1 &&
                    itr1->second == 1) || // if any char occurs once with 1 freq
                (itr2->first == 1 && itr2->second == 1))
                return true;
        }

        return false;
    }
};