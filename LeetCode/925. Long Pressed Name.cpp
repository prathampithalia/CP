class Solution {
public:
    bool isLongPressedName(string name, string typed) {

        int i = 0, l = 0;
        int n = name.size(), m = typed.size();

        while (i < n) {
            int cnt = 0;
            if (name[i] != typed[l]) {
                return false;
            }
            while (name[i] == typed[l] && l < m && i < n) {
                l++;
                cnt++;
                if (cnt >= 1) {
                    if (name[i + 1] == typed[l]) i++;
                }
            }

            i++;
        }
        if (i >= n && l >= m)
            return true;

        return false;
    }
};