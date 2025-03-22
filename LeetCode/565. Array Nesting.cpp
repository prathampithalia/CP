class Solution {
public:
    int arrayNesting(vector<int>& v) {
        int n = v.size();
        int ans = 0;
        // map<int,int> mp;
        vector<int> vi(n + 1);

        for (int i = 0; i < n; i++) {
            int cnt = 1;
            if (vi[i]) continue;
            vector<int> vis(n + 1);
            int j = v[i];
            vis[i] = 1;
            vi[i] = 1;
            while (!vis[j]) {
                // if( mp.find(v[j]) != mp.end()){
                //     cnt += mp[j];
                //     break;
                // }
                vis[j] = 1;
                vi[j] = 1;
                j = v[j];
                cnt++;
            }
            ans = max(ans, cnt);
            // mp[v[i]] = cnt ;
        }

        return ans;
    }
};