void dfsutil(vector<int> g[], int N, vector<int> &output, int start, vector<bool> &visited)
{

    output.push_back(start);
    visited[start] = 1;
    for (auto itr = g[start].begin(); itr != g[start].end(); itr++)
    {
        if (!visited[*itr])
        {
            dfsutil(g, N, output, *itr, visited);
        }
    }
}

vector<int> dfs(vector<int> g[], int N)
{

    vector<bool> visited(N);
    fill(visited.begin(), visited.end(), 0);
    vector<int> output;
    int start = 0;

    for (int i = 0; i < N; i++)
    {
        if (!visited[i])
        {
            dfsutil(g, N, output, start, visited);
        }
    }
    return output;
}