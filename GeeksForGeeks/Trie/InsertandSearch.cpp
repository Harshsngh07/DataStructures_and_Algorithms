
void insert(struct TrieNode *root, string key) {
    // code here
    TrieNode *curr = root;
    for(int i=0;i<key.length();i++)
    {
        int index = key[i]-'a';
        if(curr->children[index]==NULL)
            curr->children[index] = new TrieNode();
        curr = curr->children[index];
    }
    curr->isLeaf = true;
}

// root : root node of the trie
// key : string to search in the trie
// Returns true if key presents in trie, else false

bool search(struct TrieNode *root, string key) {
    // code here
    TrieNode *curr = root;
    for(int i=0;i<key.length();i++)
    {
        int index = key[i]-'a';
        if(curr->children[index]==NULL)
            return false;
        curr = curr->children[index];
    }
    return (curr!=NULL && curr->isLeaf);
}