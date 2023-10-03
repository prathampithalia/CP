class Solution
{
public:
    int addDigits(int num)
    {

        string s = to_string(num);

        int a = 0;

        while (s.size() != 1)
        {

            int ans = 0;
            for (int i = 0; i < s.size(); i++)
            {
                ans += (int(s[i]) - 48);
            }

            a = ans;
            s = to_string(ans);
        }

        return (num > 9 ? a : num);
    }
};