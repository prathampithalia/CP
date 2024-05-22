class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();

        int ans = 0;

        for (int i = 0; i < n - 1; i++) {

            for (int j = i + 1; j < n; j++) {
                string k = words[j];
                string p = words[i];

                reverse(k.begin(), k.end());
                reverse(p.begin(), p.end());
                if (words[j].find(words[i]) == 0 && k.find(p) == 0)
                    ans++;
            }
        }

        return ans;
    }
};