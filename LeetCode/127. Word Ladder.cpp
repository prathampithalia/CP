class Solution {
public:
    int ladderLength(string beginWord, string endWord,
        vector<string>& wordList) {

        queue<pair<string, int>> q;

        q.push({ beginWord, 1 });
        unordered_set<string> s(wordList.begin(), wordList.end());
        s.erase(beginWord);

        while (!q.empty()) {

            int step = q.front().second;
            string wrd = q.front().first;

            if (wrd == endWord) return step;
            q.pop();
            for (int i = 0; i < wrd.size(); i++) {
                char iniChar = wrd[i];
                for (char c = 'a'; c <= 'z'; c++) {
                    wrd[i] = c;
                    if (s.find(wrd) != s.end()) {
                        q.push({ wrd , step + 1 });
                        s.erase(wrd);
                    }
                }
                wrd[i] = iniChar;
            }
        }
        return 0;
    }
};