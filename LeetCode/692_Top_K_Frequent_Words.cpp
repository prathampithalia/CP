
// lexographical comparison

bool lexcomp(pair<int, string> p1, pair<int, string> p2) {
    if (p1.first == p2.first) {
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}


class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        map<string, int> v;

        for (int i = 0;i < words.size(); i++) {
            v[words[i]]++;
        }

        vector<pair<int, string>> ans;

        for (auto i : v) {
            ans.push_back({ i.second , i.first });
        }

        sort(ans.begin(), ans.end(), lexcomp);
        vector<string> fans;

        for (int i = 0;i < k; i++) {
            fans.push_back(ans[i].second);
        }

        return fans;

    }
};