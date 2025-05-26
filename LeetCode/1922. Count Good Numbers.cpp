class Solution {
public:
    const int N = 1e9 + 7;
    long int pwx(long int base, long int exp) {
        if (exp == 0)
            return 1;

        if (exp == 1)
            return base % N;

        long int t = pwx(base, exp / 2);
        t = (t * t) % N;

        // if exponent is even value
        if (exp % 2 == 0)
            return t;

        // if exponent is odd value
        else
            return ((base % N) * t) % N;
    }
    int countGoodNumbers(long long n) {

        return (pwx(5, (n + 1) / 2) * (pwx(4, n / 2))) % (N);

    }
};