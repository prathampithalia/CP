class Solution {
public:
    bool isHappy(int n) {
        bool ok = true;
        int prev = n;
        int sm = 0;
        vector<int> p;
        p.push_back(n);
        int cnt = 0;

        while (ok && n != 1) {
            int sm = 0;
            while (n) {
                int k = n % 10;
                sm += (k * k);
                n = n / 10;
            }
            if (p.back() == sm || sm == 89) {
                break;
            }
            else {
                p.push_back(sm);
                n = sm;
            }
        }
        if (p.back() == 1) return true;
        return false;
    }
};