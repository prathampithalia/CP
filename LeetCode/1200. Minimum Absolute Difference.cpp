class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        sort(arr.begin(), arr.end());

        int diff = INT_MAX;
        int ind = 0;
        for (int i = 0; i < arr.size() - 1; i++) {
            diff = min(diff, abs(arr[i + 1] - arr[i]));

            if (diff == abs(arr[i + 1] - arr[i]))
                ind = i;
        }
        vector<vector<int>> ans;

        // ans.push_back({arr[ind], arr[ind+1]});

        for (int i = 1; i < arr.size(); i++) {
            if (abs(arr[i] - arr[i - 1]) == diff)
                ans.push_back({arr[i - 1], arr[i]});
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};