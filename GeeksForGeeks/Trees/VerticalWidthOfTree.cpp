void fillSet(Node* root, unordered_set<int>& s, int hd)
{
    if(!root) return;
    
    fillSet(root->left, s, hd-1);
    s.insert(hd);
    fillSet(root->right, s, hd+1);
}

int verticalWidth(Node* root)
{
    unordered_set<int> s;
    fillSet(root, s, 0);
    return s.size();
}