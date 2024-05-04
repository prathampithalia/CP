class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            vector<int> freq(26);
            
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;
                int A = 0, B = 1000;
                // this covers each subarrays
                for (auto k : freq) {
                    if (k>0){
                    A = max(A, k);
                    B = min(B, k);
                    }
                }

                ans += A - B;

            }
        }
        return ans;
    }
};