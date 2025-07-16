class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int even = 0, odd = 0;
        int altEven = 0, altOdd = 0;
        for (auto i : nums) {
            if (i & 1) {
                odd++;
                altOdd = altEven + 1;
            }
            else {
                even++;
                altEven = altOdd + 1;
            }
        }

        return max({ even , odd , altEven,altOdd });
    }
};