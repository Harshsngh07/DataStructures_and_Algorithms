class Solution
{
public:
    // root: root node of the tree
    vector<int> verticalOrder(Node *root)
    {
        vector<int> v;
        queue<pair<Node *, int>> q;
        map<int, vector<int>> m;
        q.push({root, 0});

        while (!q.empty())
        {
            auto p = q.front();
            Node *curr = p.first;
            int hd = p.second;
            m[hd].push_back(curr->data);
            q.pop();

            if (curr->left != NULL)
                q.push({curr->left, hd - 1});

            if (curr->right != NULL)
                q.push({curr->right, hd + 1});
        }

        for (auto x : m)
        {
            for (int i = 0; i < x.second.size(); i++)
                v.push_back(x.second[i]);
        }

        return v;
    }
};