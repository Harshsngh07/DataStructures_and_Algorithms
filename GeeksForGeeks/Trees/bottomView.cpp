void bottomView(Node* root)
{
    if(root == NULL)
        return ;
    
    int hd = 0;
    queue<Node *> q;
    map<int,int> m;

    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        hd = temp->hd;

        m[hd] = temp->data;

        if(temp->left)
        {
            temp->data->hd = hd - 1;
            q.push(temp->left);
        }

        if(temp->right)
        {
            temp->data->hd= hd + 1;
            q.push(temp->right);
        }

        for(auto i=m.begin();i!=m.end();i++)
            cout << i->second << " ";
    }
       
}