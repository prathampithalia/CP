class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> c;
        for (auto i : edges) {
            c[i[0]]++;
            c[i[1]]++;
        }

        int x = edges.size();
        for (auto i : c) {
            if (i.second >= x)
                return i.first;
        }

        return 0;
    }
};