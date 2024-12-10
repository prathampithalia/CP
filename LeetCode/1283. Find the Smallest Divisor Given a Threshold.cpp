long long help(vector<int>& p, long long k) {
    long long eat = 0;
    for (int i = 0; i < p.size(); i++) {
        eat += (p[i] / k);
        if (p[i] % k)
            eat++;
        // eat += ceil((double)(p[i]) / (double)(k));
    }

    return eat;
}

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int l = 1;
        int high = (*max_element(nums.begin(), nums.end()));

        int mid = (l + high) / 2;

        while (l <= high) {
            if (help(nums, mid) <= threshold) {
                high = mid - 1;
            }
            else
                l = mid + 1;

            mid = (l + high) / 2;
        }

        return l;
    }
};
