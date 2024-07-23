bool valid(char c) {

    if ((int)c >= 97 && (int)c <= 122) return true;
    if ((int)c >= 65 && (int)c <= 90) return true;

    return false;

}

class Solution {
public:
    string reverseOnlyLetters(string s) {

        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (!valid(s[l]))l++;
            else if (!valid(s[r]))r--;
            else {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }

        return s;

    }
};