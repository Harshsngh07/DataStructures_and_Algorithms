bool compare(const pair<int, int> a, const pair<int, int> b)
{
    if (a.second == b.second)
        return a.first > b.first;
    return a.second > b.second;
}

vector<int> TopK(vector<int> &array, int k)
{

    unordered_map<int, int> m;

    for (int i = 0; i < array.size(); i++)
        m[array[i]]++;

    vector<pair<int, int>> v(m.begin(), m.end());

    sort(v.begin(), v.end(), compare);

    vector<int> ans;

    for (int i = 0; i < k; i++)
        ans.push_back(v[i].first);

    return ans;
}