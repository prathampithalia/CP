int helper(vector<int> a, int capacity) {
    int days = 1;
    int loaded = 0;

    for (int i = 0; i < a.size(); i++) {
        if (loaded + a[i] > capacity) {
            days++;
            loaded = a[i];
        }
        else {
            loaded += a[i];
        }
    }

    return days;
}

class Solution {
public:
    int shipWithinDays(vector<int>& a, int days) {

        int n = a.size();

        // sort(a.begin(), a.end());

        int l = *max_element(a.begin(), a.end()), r = 1e8;
        int mid = (l + r) >> 1;

        while (l < r) {
            if (helper(a, mid) > days) {
                l = mid + 1;
            }
            else {
                r = mid;
            }

            mid = (l + r) >> 1;
        }

        return l;
    }
};