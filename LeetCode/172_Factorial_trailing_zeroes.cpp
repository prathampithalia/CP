int pv(int x)
{
    if (x == 0)
        return 1;
    return 5 * pv(x - 1);
}

class Solution
{
public:
    int trailingZeroes(int n)
    {

        int temp = n;

        int ans = 0;

        int i = 1;

        while (pv(i) <= n)
        {
            ans += (temp / pv(i));
            i++;
        }

        return ans;
    }
};