class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {

        int n = nums.size();
        int l = pow(2, n) - 1;

        vector<vector<int>> ans{}, fans{};

        for (int i = 0; i < l + 1; i++)
        {
            vector<int> a{};
            bitset<10> v(i);
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 1)
                {
                    a.push_back(nums[i]);
                }
            }
            sort(a.begin(), a.end());
            ans.push_back(a);
        }

        sort(ans.begin(), ans.end());
        fans.push_back(ans[0]);
        for (int i = 1; i < ans.size(); i++)
        {
            if (ans[i] != ans[i - 1])
            {
                fans.push_back(ans[i]);
            }
        }

        return fans;
    }
};