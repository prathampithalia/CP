class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();

        map<int, int> v;
        for (auto i : arr)v[i]++;

        vector<pair<int, int>> t;
        for (auto i : v) {
            t.push_back({ i.second , i.first });
        }

        sort(t.begin(), t.end());

        int ans = 0, cnt = 0;
        for (int i = t.size() - 1; i >= 0; i--) {
            if (cnt < arr.size() / 2) {
                cnt += t[i].first;
                ans++;
            }
            else break;
        }
        return ans;
    }
};