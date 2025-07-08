class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size(), m = nums2.size();
        int  res = 0;
        int i = 0;
        for (int j = 0; j < m;j++) {
            while (i<n && nums1[i] > nums2[j]) i++;
            if (i == n) break;
            res = max(res, j - i);
        }

        return res;

    }
};