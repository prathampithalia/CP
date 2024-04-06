class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        ios_base::sync_with_stdio(0); cin.tie(0);

        vector<int> ans(A.size());
        unordered_map<int, int> a, b;
        int cnt = 0;
        for (int i = 0; i < A.size(); i++) {

            if (a.find(A[i]) == a.end())
                a[A[i]]++;
            else {
                cnt++;
            }

            if (a.find(B[i]) != a.end()) {
                cnt++;
                ans[i] = cnt;
            } else {
                a[B[i]]++;
                ans[i] = cnt;
            }
        }
        return ans;
    }
};