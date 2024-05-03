class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> v;

        for (auto i : nums) {
            v[i]++;
            if (v[i] > 2)
                return false;
        }
        return true;
    }
};