class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nlr;
        stack<int> s;
        int n = nums2.size();
        for (int i = n - 1; i >= 0; i--) {
            if (s.size() == 0) nlr.push_back(-1);
            else {
                if (s.top() > nums2[i]) {
                    nlr.push_back(s.top());
                    // s.pop();
                }
                else {
                    while (s.size() && s.top() < nums2[i]) {
                        s.pop();
                    }
                    if (s.size()) nlr.push_back(s.top());
                    else nlr.push_back(-1);
                }
            }
            s.push(nums2[i]);
        }
        reverse(nlr.begin(), nlr.end());

        int m = nums1.size();
        vector<int>ans(m);

        for (int i = 0;i < m; i++) {
            for (int j = 0;j < n; j++) {
                if (nums1[i] == nums2[j]) {
                    ans[i] = nlr[j];
                }
            }
        }

        return ans;

    }
};