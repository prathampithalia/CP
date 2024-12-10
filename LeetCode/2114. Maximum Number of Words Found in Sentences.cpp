class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int space = 0;
            for (auto j : sentences[i])
                if (j == ' ')
                    space++;

            ans = max(ans, space);
        }
        return ans+1;
    }
};