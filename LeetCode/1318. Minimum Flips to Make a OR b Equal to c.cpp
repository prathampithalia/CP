class Solution {
public:
    int minFlips(int a, int b, int c) {

        bitset<32> A(a), B(b), C(c);

        int ans = 0;
        for (int i = 0; i<32; i++) {
            if (C[i] == 1) {
                if ((A[i] | B[i]) == 0)
                    ans++;
            } else {
                if( A[i] )ans++;
                if( B[i] ) ans++ ;
            }
        }
        return ans ; 
    }
};