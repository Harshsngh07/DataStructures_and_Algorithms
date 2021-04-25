bool helper(Node* root, int X, unordered_set<int> &s)
{
    if(root==NULL) return false;
    
    if(helper(root->left, X, s)==true) return true;
    
    if(s.find(X-root->data)!=s.end()) return true;
    else
        s.insert(root->data);
    return helper(root->right, X, s);    
}

bool findPair(Node* root, int X) {
    unordered_set<int> s;
    return helper(root, X, s);
}