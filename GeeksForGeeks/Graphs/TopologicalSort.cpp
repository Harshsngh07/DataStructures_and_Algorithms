//dfs
void topo(int i, int V, int vis[], vector<int> adj[], stack<int> &s)
{
    vis[i] = 1;
    for (int j = 0; j < adj[i].size(); j++)
    {
        if (!vis[adj[i][j]])
            topo(adj[i][j], V, vis, adj, s);
    }
    s.push(i);
}

vector<int> topoSort(int V, vector<int> adj[])
{
    stack<int> s;
    int vis[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
            topo(i, V, vis, adj, s);
    }
    vector<int> v;
    int j = 0;
    while (!s.empty())
    {
        int x = s.top();
        s.pop();
        a.push_back(x);
    }
    return v;
}
