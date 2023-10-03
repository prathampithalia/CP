class Solution
{
public:
    int getSum(int a, int b)
    {

        int ans = 2 * (a & b) + (a ^ b);

        return ans;
    }
};