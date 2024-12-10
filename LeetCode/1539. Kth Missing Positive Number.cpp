class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       
       int n = arr.size();
        int cnt = 0, j = 0, mis = 0;
        for (int i = 1; i <= 20000; i++) {
            if ( j<n && i == arr[j] ) {
                j++;
            } 
            else  {
                mis = i;
                cnt++;
            }
            if (cnt == k) {
                return mis;
            }
        }
        return 0;
    }
};