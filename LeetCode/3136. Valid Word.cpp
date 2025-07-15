class Solution {
public:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return true;
        }
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return true;
        }
        return false;
    }

    bool inValid(char c) {
        if ((int)(c) < 48)
            return true;
        if (int(c) >= 58 && int(c) <= 64)
            return true;
        if (int(c) >= 91 && int(c) <= 96)
            return true;

        return false;
    }

    bool isValid(string word) {
        bool hasVowel = false;
        bool hasCon = false;
        bool valid = true;
        if (word.size() < 3)
            return false;

        for (auto i : word) {
            int x = int(i);
            if (isVowel(i))
                hasVowel = true;
            if (isVowel(i) == false &&
                ((x <= 90 && x >= 65) || (x >= 97 && x <= 122)))
                hasCon = true;

            if (inValid(i))
                valid = false;
        }

        return (hasVowel && hasCon && valid);
    }
};