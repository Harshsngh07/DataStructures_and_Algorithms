bool isCycleConnected(vector<int> g[], int s, int V, vector<bool> &visited)
{
    vector<int> parent(V, -1);
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : g[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
                parent[v] = u;
            }
            else if (parent[v] != u)
            {
                return true;
            }
        }
    }
    return false;
}

bool isCyclic(vector<int> g[], int V)
{
    // Your code here
    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
            if (isCycleConnected(g, i, V, visited) == true)
                return true;
    }
    return false;
}