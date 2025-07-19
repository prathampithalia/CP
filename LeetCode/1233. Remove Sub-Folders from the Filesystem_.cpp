class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {

        sort(folder.begin(), folder.end());

        vector<string> ans;
        ans.push_back(folder[0]);

        for (int i = 1; i < folder.size(); i++) {
            string f = folder[i];
            string k = ans.back();
            if (f.find(k) != 0) {
                ans.push_back(f);
            }
            else {
                if (f[k.size()] != '/') {
                    ans.push_back(f);
                }
            }
        }
        return ans;

    }
};