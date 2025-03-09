int solution(vector<int> nums) {
    int cnt = 0, ans = 0;
    if (nums.size() == 0) {
        return 0;
    }
    set<int> s;
    for (auto i : nums)
        s.insert(i);

    for (auto i : s) {
        if (s.find(i - 1) == s.end()) {
            cnt = 1;
            int x = i;
            while (s.find(x + 1) != s.end()) {
                x++;
                cnt++;
            }
            ans = max(ans, cnt);
        }
    }
    return ans;
}

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        if (n == 0)
            return 0;

        sort(nums.begin(), nums.end());
        int cnt = 0, ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                continue;
            }
            else if (nums[i] + 1 == nums[i + 1]) {
                cnt++;
            }
            else {
                cnt = 0;
            }
            ans = max(ans, cnt);
        }

        return ans + 1;
    }
};