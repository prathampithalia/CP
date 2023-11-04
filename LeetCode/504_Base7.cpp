class Solution {
public:
    string convertToBase7(int num) {

        string ans = "";
        int t = num;
        t = abs(t);
        while (t > 0)
        {
            string b = to_string(t % 7);

            ans += b;
            t = t / 7;
        }
        if (num < 0) ans += '-';
        if (num == 0) ans += '0';
        reverse(ans.begin(), ans.end());

        return ans;
    }
};