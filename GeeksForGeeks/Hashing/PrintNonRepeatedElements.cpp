vector<int> printNonRepeated(int arr[], int n)
{
    unordered_map<int, int> m;
    vector<int> v;

    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    for (int i = 0; i < n; i++)
    {
        if (m[arr[i]] == 1)
            v.push_back(arr[i]);
    }

    return v;
}