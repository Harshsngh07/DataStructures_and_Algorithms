bool DFS(int u, int p, vector<int> g[], vector<bool> &vis)
{
    vis[u] = true;
    for (auto i : g[u])
    {
        if (!vis[i])
        {
            if (DFS(i, u, g, vis))
                return true;
        }
        else if (i != p || i == u)
            return true;
    }

    return false;
}

bool isCyclic(vector<int> g[], int V)
{

    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && DFS(i, -1, g, visited))
            return true;
    }
    return false;
}