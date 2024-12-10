bool comp(string x, string y) {
    return x + y > y + x;
}


class Solution {
public:
    string largestNumber(vector<int>& nums) {

        int n = nums.size();
        vector<string> s(n);

        for (int i = 0; i < n; i++)s[i] = to_string(nums[i]);

        sort(s.begin(), s.end(), comp);
        string ans = "";
        for (auto i : s)ans += i;

        // for multiple 0
        if (ans[0] == '0') ans = "0";
        return ans;

    }
};