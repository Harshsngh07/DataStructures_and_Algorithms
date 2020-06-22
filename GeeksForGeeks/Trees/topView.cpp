void topView(Node* root)
{
    if(root==NULL)
        return;

    queue<Node *> q;
    map<int,int> m;

    int hd = 0;
    root->hd = hd;

    q.push(root);

    while (q.size())
    {
        hd = root->hd;

        if(m.count(hd)==0)
        m[hd] = root->data;

        if(root->left)
        {
            root->left->hd = hd-1;
            q.push(root->left);
        }

        if(root->right)
        {
            root->left->hd = hd-1;
            q.push(root->right);
        }

        q.pop();
        root = q.front();
    }
    

    for(auto i=m.begin;i!=m.end();i++)
    {
        cout << i->second << " ";
    }
}