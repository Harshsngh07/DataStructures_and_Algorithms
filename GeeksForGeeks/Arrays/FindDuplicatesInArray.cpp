vector<int> duplicates(int a[], int n)
{
    // code here
    vector<int> v;
    map<int, int> m;
    for (int i = 0; i < n; i++)
        m[a[i]]++;
    for (auto i : m)
        if (i.second > 1)
            v.push_back(i.first);
    if (v.empty())
    {
        v.push_back(-1);
    }
    return v;
}