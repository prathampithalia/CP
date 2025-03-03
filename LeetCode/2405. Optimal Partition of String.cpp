class Solution {
public:
    int partitionString(string s) {
        int ans = 1;

        // set<char> st ;

        // for(int i = 0 ; i < s.size() ; i++){
        //     if( st.find(s[i]) != st.end()){
        //         ans++;
        //         st.clear();
        //     }
        //     st.insert(s[i]);
        // }

        // return ans ;

        int mask = 0;

        for (int i = 0; i < s.size(); i++) {
            int k = (1 << s[i] - 'a');
            if (mask & (k)) {
                mask = 0;
                ans++;
            }
            mask |= k;
        }

        return ans;
    }
};