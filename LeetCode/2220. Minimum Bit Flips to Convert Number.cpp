class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<64> a(start), b(goal);
        int ans = 0;
        for (int i = 0; i < 64;i++) {
            if (a[i] != b[i]) ans++;
        }
        return ans;
    }
};