class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        stack<int> s;
        int ans = 0, cnt = 0;
        for (auto i : nums) {
            if (s.size() == 0) {
                if (i == 1) {
                    s.push(1);
                    cnt = 1;
                }
                else s.push(0);
            }
            else {
                if (s.top() == 1) {
                    if (i == 1) {
                        cnt++;
                    }
                    else {
                        s.push(0);
                        cnt = 0;
                    }
                }
                else {
                    if (i == 1) {
                        s.push(1);
                        cnt++;
                    }
                    else cnt = 0;
                }
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, cnt = 0;
        for (auto i : nums) {
            if (i == 1) {
                cnt++;
            }
            else
                cnt = 0;
            ans = max(ans, cnt);
        }
        return ans;
    }
};