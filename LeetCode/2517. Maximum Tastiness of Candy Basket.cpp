int helper(vector<int> a, int mid) {

    int count = 1;
    int lastPicked = a[0];
    for (int i = 1; i < a.size(); i++) {
        if (a[i] - lastPicked >= mid) {
            count++;
            lastPicked = a[i];
        }
    }

    return count;
}

class Solution {
public:
    int maximumTastiness(vector<int>& a, int k) {

        sort(a.begin(), a.end());
        int l = 0, r = 1e9;
        int ans = 0;

        int mid = (l + r) >> 1;

        while (l <= r) {
            if (helper(a, mid) >= k) {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;

            mid = (l + r) >> 1;
        }

        return ans;
    }
};