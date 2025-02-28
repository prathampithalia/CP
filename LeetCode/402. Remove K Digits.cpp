class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (int i = 0; i < num.size(); i++) {

            while (!st.empty() && k > 0 && (st.top()) > (num[i])) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        // remove element from stack if k is left
        while (k > 0) {
            st.pop();
            k--;
        }

        if (st.empty())
            return "0";


        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        while (ans.size() != 0 && ans.back() == '0')
            ans.pop_back();

        reverse(ans.begin(), ans.end());
        if (ans.empty())
            return "0";
        return ans;
    }
};