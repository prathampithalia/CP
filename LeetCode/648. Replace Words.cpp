struct Node {
    // Array to store
    // links to child nodes
    Node* links[26];
    // Counter for number of
    // words that end at this node
    int cntEndWith = 0;
    // Counter for number of words
    // that have this node as a prefix
    int cntPrefix = 0;

    // Function to check if the
    // node contains a specific key
    bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL);
    }

    // Function to get the child
    // node corresponding to a key
    Node* get(char ch) {
        // Return the link
        // corresponding to the character
        return links[ch - 'a'];
    }

    // Function to insert a child
    // node with a specific key
    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }

    // Function to increment the
    // count of words that end at this node
    void increaseEnd() {
        cntEndWith++;
    }

    // Function to increment the count of
    // words that have this node as a prefix
    void increasePrefix() {
        cntPrefix++;
    }

    // Function to decrement the count
    // of words that end at this node
    void deleteEnd() {
        cntEndWith--;
    }

    // Function to decrement the count of
    // words that have this node as a prefix
    void reducePrefix() {
        cntPrefix--;
    }
};

// Define a class for the
// trie data structure
class Trie {
private:
    Node* root;

public:
    // Constructor to initialize
    // the trie with an empty root node
    Trie() {
        // Create a new root node
        root = new Node();
    }

    // Function to insert
    // a word into the trie
    void insert(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (!node->containsKey(word[i])) {
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);
            node->increasePrefix();
        }
        node->increaseEnd();
    }

    // Function to count the number
    // of words equal to a given word
    int countWordsEqualTo(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->containsKey(word[i])) {
                node = node->get(word[i]);
            }
            else {
                return 0;
            }
        }
        return node->cntEndWith;
    }

    // Function to count the number of
    // words starting with a given prefix
    int countWordsStartingWith(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->containsKey(word[i])) {
                node = node->get(word[i]);
            }
            else {
                return 0;
            }
        }
        return node->cntPrefix;
    }

    // Function to erase a  word from the trie
    void erase(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->containsKey(word[i])) {
                node = node->get(word[i]);
                node->reducePrefix();
            }
            else {
                return;
            }
        }
        node->deleteEnd();
    }
};




class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        Trie T;

        vector<string> s;
        string k = "";
        for (auto i : sentence) {
            if (i != ' ') k += i;
            else {
                s.push_back(k);
                k = "";
            }
        }
        s.push_back(k);
        string ans = "";
        for (auto i : s) {
            bool ok = false;
            T.insert(i);
            string add = "";
            int sz = INT_MAX;
            for (auto j : dictionary) {
                if (T.countWordsStartingWith(j) != 0) {
                    // add = j;
                    sz = min((int)j.size(), sz);
                    if (j.size() == sz) add = j;
                    ok = true;
                }
            }
            T.erase(i);
            if (ok) {
                ans += add;
                ans += ' ';
            }
            else {
                ans += i;
                ans += ' ';
            }
        }
        ans.pop_back();
        return ans;
    }
};