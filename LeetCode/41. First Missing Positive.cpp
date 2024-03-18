class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        unordered_map<int, int> v;

        for (int i : nums) {
            v[i]++;
        }

        int ans = 0;
        for (int i = 1;i < (1 << 31 - 1);i++) {
            if (v.find(i) == v.end()) {
                ans = i;
                break;
            }
        }

        return ans;

    }
};