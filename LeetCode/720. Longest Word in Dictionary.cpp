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
    string longestWord(vector<string>& w) {
        sort(w.begin(), w.end());
        Trie trie;
        string ans = "";

        for (auto& i : w) {
            if (trie.countWordsStartingWith(i.substr(0, i.size() - 1)) || i.size() == 1) {
                trie.insert(i);
                if (i.size() > ans.size()) {
                    ans = i;
                }
            }
        }
        return ans;
    }
};