class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int num = 1;
        while (s.count(num)) {
            num <<= 1;
        }
        return num;
    }
};