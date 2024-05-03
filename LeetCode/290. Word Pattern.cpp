class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.size(), m = s.size();

        vector<int> pt(n), st(m);
        unordered_map<string, int> smap;
        unordered_map<char, int> pmap;
        vector<string> sst;


        for (int i = 0;i < n; i++) {
            pmap[pattern[i]] = i;
        }


        int k = 0;
        string ss = "";
        for (auto i : s) {

            if (i != ' ') ss += i;
            else {
                sst.push_back(ss);
                smap[ss] = k;
                ss = "";
                k++;
            }
        }
        smap[ss] = k;
        sst.push_back(ss);

        vector<int> pl(n), sl(sst.size());

        for (int i = 0; i < n;i++) {
            pl[i] = pmap[pattern[i]];
        }

        for (int i = 0; i < sst.size();i++) {
            sl[i] = smap[sst[i]];
        }

        if (sl == pl) return true;
        return false;
    }
};