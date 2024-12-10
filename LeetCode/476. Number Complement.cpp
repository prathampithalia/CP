// class Solution {
// public:
//     int findComplement(int num) {
//         vector<int> b(32);
//         for (int i = 0; i < 32; i++) {
//             if (num & (1 << i))
//                 b[i] = 1;
//         }
//         // reverse(b.begin(), b.end());
//         int ans = 0;
//         int mx = 0 ;
//         for(auto i:  b)cout<<i ;
//         for (int i = 0; i < 32; i++) {
//             if (b[i])mx = max(mx , i);
//         }
//         for(int i =0 ; i<=mx ; i++){
//             if( !b[i] )ans += (1<<i);
//         }
//         return ans;
//     }
// };

// ex : 
//  101011
//  111111
//  010100

class Solution {
public:
    int findComplement(int num) {
        int b = 0;
        for (int i = 0;i <= log2(num); i++) {
            b += (1 << i);
        }
        return (b ^ num);
    }
};