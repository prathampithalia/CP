class Solution {
public:
    int minimizeXor(int num1, int num2) {

        vector<int> x(32);

        int k = __builtin_popcount(num2);

        //  to get minimal xor we make set bits same as in num1 to num x 
        // such that when xor it gets zero 
        for (int i = 31; i >= 0; i--) {
            if (num1 & (1 << i)) {
                if (k > 0) {
                    x[i] = 1;
                    k--;
                } else
                    break;
            }
        }

        int ans = 0;
        //  if k>0 then we set , setbits to first zeros till number of setbits is zero 
        if (k != 0) {
            for (int i = 0; i < 32; i++) {
                if (k > 0 && x[i] == 0) {
                    x[i] = 1;
                    k--;
                }
            }
        }

        for (int i = 0; i < 32; i++) {
            if (x[i] != -1)
                ans += (x[i] * (1 << (i)));
        }
        return ans;
    }
};