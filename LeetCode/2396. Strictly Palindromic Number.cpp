class Solution {
public:
    bool helper(int n, int k) {

        string bin = "";
        while (n > 0) {
            int bit = n % k;
            bin.push_back('0' + bit);
            n /= k;
        }

        string b = bin;
        reverse(bin.begin(), bin.end());

        return b == bin;
    }

    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i <= n - 2; i++) {
            if (!helper(n, i))
                return false;
        }
        return true;
    }
};