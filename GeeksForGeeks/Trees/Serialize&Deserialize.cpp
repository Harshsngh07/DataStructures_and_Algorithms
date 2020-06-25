void serialize(Node *root, vector<int> &A)
{
    if (root == NULL)
    {
        A.push_back(-1);
        return;
    }

    A.push_back(root->data);
    serialize(root->left, A);
    serialize(root->right, A);
}

/*this function deserializes
 the serialized vector A*/

Node *deSerializeUtil(vector<int> &A, int *index)
{
    if (*index == A.size() || A[*index] == -1)
    {
        *index += 1;
        return NULL;
    }

    Node *root = new Node(A[*index]);
    *index += 1;
    root->left = deSerializeUtil(A, index);
    root->right = deSerializeUtil(A, index);

    return root;
}

Node *deSerialize(vector<int> &A)
{
    int index = 0;
    return deSerializeUtil(A, &index);
}