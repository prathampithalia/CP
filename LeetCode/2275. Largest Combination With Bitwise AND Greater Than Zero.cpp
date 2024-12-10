class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> b(24);

        int n = candidates.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 24; j++) {
                b[j] += (bool)(candidates[i] & (1 << j));
            }
        }

        return *max_element(b.begin(), b.end());
    }
};