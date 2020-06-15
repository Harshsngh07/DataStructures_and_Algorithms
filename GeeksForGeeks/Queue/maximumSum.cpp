long maximum_sum(vector<int> v, int k)
{
    // Your code here
    unordered_map<int, int> m;

    for (int i = 0; i < v.size(); i++)
        m[v[i]]++;

    long maxSum(0);
    priority_queue<pair<int, int>> pq;

    for (auto i : m)
        pq.push({i.second, i.first});

    int c = 0;
    while (c < k)
    {
        pair<int, int> p;
        p = pq.top();
        pq.pop();
        p.first--;
        maxSum += p.second;
        if (p.first)
            pq.push(p);
        c++;
    }

    return maxSum;
}