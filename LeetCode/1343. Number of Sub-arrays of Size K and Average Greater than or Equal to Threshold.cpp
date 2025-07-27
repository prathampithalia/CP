class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int l = 0, r = 0;
        int cnt = 0, sum = 0;

        while (r < n) {
            sum += arr[r];

            if (r - l + 1 > k) {
                sum -= arr[l];
                l++;
            }
            else if (r - l + 1 == k) {
                if (sum / k >= threshold) {
                    cnt++;
                    sum -= arr[l];
                    l++;
                }
                else {
                    sum -= arr[l];
                    l++;
                }
            }
            r++;
        }
        return cnt;
    }
};