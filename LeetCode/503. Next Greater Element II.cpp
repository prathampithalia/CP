class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;
        stack<int> s;
        for (int i = n - 1;i >= 0; i--)s.push(nums[i]);
        for (int i = n - 1; i >= 0; i--) {

            if (s.size() > 0 && s.top() > nums[i]) {
                ans.push_back(s.top());

            }
            else {
                while (s.size() && s.top() <= nums[i]) s.pop();

                if (s.size() != 0)ans.push_back(s.top());
                else ans.push_back(-1);
            }

            s.push(nums[i]);

        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};