
int fact(int x)
{
    if (x == 0)
        return 1;
    return x * fact(x - 1);
}

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {

        vector<vector<int>> v{};

        int n = nums.size();

        for (int i = 0; i < fact(n); i++)
        {

            v.push_back(nums);
            next_permutation(nums.begin(), nums.end());
        }

        return v;
    }
};