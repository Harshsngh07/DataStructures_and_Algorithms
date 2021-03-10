class Solution
{
    public:
    int getMaxWidth(Node* root)
    {
        queue<Node* > q;
        q.push(root);
       int s = 0;
       if (root == NULL)
            return 0;
       while(!q.empty())
       {
           int n = q.size();
           s = max(n,s);
           for(int i=0;i<n;i++)
           {
               Node* curr = q.front();
               q.pop();
               if(curr->left)
                    q.push(curr->left);
               if(curr->right)
                    q.push(curr->right);
           }
       }
       
       return s;
    }
};
