class Solution {
public:
    int reverse(int x) {

        long long r = 0;
        while (x) {
            r = r * 10 + x % 10;
            x = x / 10;

            cout << r << ' ' << x << endl;
        }

        if (r > INT_MAX || r < INT_MIN)
            return 0;
        return r;
    }
};