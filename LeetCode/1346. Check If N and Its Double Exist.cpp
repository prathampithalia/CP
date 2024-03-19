class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> v;

        bool ans = false;
        for (int i = 0; i < arr.size(); i++)
            v[arr[i]]++;

        for (int i = 0; i < arr.size(); i++) {
            if (v.find(arr[i] * 2) != v.end()) {
                ans = true;
                if (arr[i] == 0 && v[arr[i]] == 1)
                    ans = false;
            }
        }

        return ans;
    }
};