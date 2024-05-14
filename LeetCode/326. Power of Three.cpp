bool p(int n) {
    if (n == 1)return true;
    if (n <= 0 || n % 3 != 0) return false;
    if (n == 3) return true;

    return p(n / 3);
}

class Solution {
public:
    bool isPowerOfThree(int n) {
        return p(n);
    }
};