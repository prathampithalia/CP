class Solution {
public:

    bool possible(int mid, int k, int m, vector<int> bloom) {
        int bouquets = 0;
        int adj = 0;
        for (auto i : bloom) {
            if (i <= mid) {
                adj++;
                if (adj == k) {
                    bouquets++;
                    adj = 0;
                }
                if (bouquets == m) return true;
            }
            else {
                adj = 0;
            }
        }
        return false;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {

        if ((long)m * (long)k > bloomDay.size()) return -1;

        int low = 1;
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int mid = (low + high) / 2;

        while (low < high) {

            if (possible(mid, k, m, bloomDay)) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
            mid = (low + high) >> 1;
        }

        return low;

    }
};