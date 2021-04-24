class Solution
{
public:
    void countDuplicate(Node *root, unordered_set<int> &s, vector<int> &duplicate)
    {
        if (root)
        {
            countDuplicate(root->left, s, duplicate);

            if (s.find(root->data) != s.end())
            {
                duplicate.push_back(root->data);
            }

            countDuplicate(root->right, s, duplicate);
        }
    }

    void createSet(Node *root, unordered_set<int> &s)
    {
        if (root)
        {
            createSet(root->left, s);
            s.insert(root->data);
            createSet(root->right, s);
        }
    }

    vector<int> findCommon(Node *root1, Node *root2)
    {
        unordered_set<int> s;
        createSet(root1, s);

        vector<int> duplicate;
        countDuplicate(root2, s, duplicate);

        return duplicate;
    }
};
