const int ALPHABET_SIZE = 26;
struct TrieNode {
    struct TrieNode* children[ALPHABET_SIZE];
    bool isEnd;
    TrieNode() {
        isEnd = false;
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            children[i] = NULL;
        }
    }
};
class Trie {
    TrieNode *root;
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* tRoot = root;
        for (char c: word) {
            int ind = c - 'a';
            if (tRoot->children[ind] == NULL) {
                TrieNode* tmp = new TrieNode();
                tRoot->children[ind] = tmp;
            }
            tRoot = tRoot->children[ind]; 
        }
        tRoot->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* tRoot = root;
        for (char c: word) {
            int ind = c - 'a';
            if (tRoot->children[ind] == NULL)
                return false;
            tRoot = tRoot->children[ind];
        }
        return tRoot->isEnd;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* tRoot = root;
        for (char c: prefix) {
            int ind = c - 'a';
            if (tRoot->children[ind] == NULL)
                return false;
            tRoot = tRoot->children[ind];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
