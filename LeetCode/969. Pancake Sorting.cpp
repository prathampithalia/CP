class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        if (is_sorted(arr.begin(), arr.end()))return {};
        vector<int> ans;

        for (int i = n; i >= 1; i--) {
            for (int j = 0; j < n; j++) {
                if (arr[j] == i) {
                    ans.push_back(j + 1);
                    reverse(arr.begin(), arr.begin() + j + 1);
                    ans.push_back(i);
                    reverse(arr.begin(), arr.begin() + i);
                    break;
                }
            }
        }
        return ans;
    }
};