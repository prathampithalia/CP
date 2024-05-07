class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {

        int n = ranges.size();
        unordered_map<int, int> a, b;
        for(int i = 0 ; i<n ;i++){
            for(int j = ranges[i][0] ; j<= ranges[i][1] ; j++){
                a[j]=1;
            }
        }

        for (int i = left; i <= right; i++) {
            if (a.find(i) == a.end())
                return false;
        }
        return true;
    }
};