
int fact(int x)
{
    if (x == 0)
        return 1;
    return x * fact(x - 1);
}

class Solution
{
public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {

        set<vector<int>> v{};

        int n = nums.size();

        for (int i = 0; i < fact(n); i++)
        {

            v.insert(nums);
            next_permutation(nums.begin(), nums.end());
        }

        vector<vector<int>> vv{v.begin(), v.end()};

        return vv;
    }
};