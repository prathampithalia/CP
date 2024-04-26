class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int n = arr.size();
        int ind = -1;

        if (n < 3)
            return false;

        for (int i = 0; i < n; i++) {
            if (arr[i] == arr[i + 1])
                return false;
            if (arr[i] > arr[i + 1]) {
                ind = i;
                break;
            }
        }

        if (ind == n - 1 || ind == 0)
            return false;

        for (int i = ind; i < n - 1; i++) {
            if (arr[i] <= arr[i + 1])
                return false;
        }

        return true;
    }
};