class Solution {
public:

    bool possible(long long mid, int cars, vector<int> ranks) {

        long long repaired = 0;

        for (long long rank : ranks) {
            repaired += sqrt(mid / rank);

            if (repaired >= cars) return true;
        }

        return false;

    }

    long long repairCars(vector<int>& ranks, int cars) {

        long long left = 1;
        long long right = 1e14;
        // T T T F F F F : case
        long long mid = (left + right) >> 1;

        while (left < right) {
            if (possible(mid, cars, ranks)) {
                right = mid;
            }
            else left = mid + 1;

            mid = (left + right) >> 1;
        }

        return left;

    }
};