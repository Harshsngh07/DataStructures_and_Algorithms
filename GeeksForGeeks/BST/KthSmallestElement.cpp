// O(n) space 

int KthSmallestElement(Node *root, int K)
{

    vector<int> v;

    if (root == NULL)
        return -1;

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *node = q.front();
        v.push_back(node->data);
        q.pop();

        if (node->left != NULL)
            q.push(node->left);

        if (node->right != NULL)
            q.push(node->right);
    }

    sort(v.begin(), v.end());

    if (K > v.size())
        return -1;

    return v[K - 1];
}


// O(1) space

int KthSmallestElement(Node *root, int k)
{
    Node *cur = root, *pre;

    int ans = -1;

    // Inorder morris traversal
    // https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion-and-without-stack/
    while (cur != NULL)
    {
        if (cur->left == NULL)
        {
            if (k == 1)
                ans = cur->data;
            k--;
            cur = cur->right;
        }
        else
        {
            pre = cur->left;

            while (pre->right != NULL and pre->right != cur)
                pre = pre->right;

            if (pre->right == NULL)
            {
                pre->right = cur;
                cur = cur->left;
            }
            else
            {
                if (k == 1)
                    ans = cur->data;
                k--;
                pre->right = NULL;
                cur = cur->right;
            }
        }
    }
    return ans;
}