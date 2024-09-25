class Solution {
public:
    int splitNum(int num) {
        deque<int> s;
        while (num) {
            s.push_back(num % 10);
            num /= 10;
        }

        sort(s.begin(), s.end());

        int n1 = 0, n2 = 0, n = s.size();

        for (int i = 0; i < n; i += 2)
            n1 = (n1 * 10) + s[i];
        for (int i = 1; i < n; i += 2)
            n2 = (n2 * 10) + s[i];

        return n1 + n2;
    }
};