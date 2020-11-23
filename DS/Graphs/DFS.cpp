#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    void DFSUtil(int v, bool visited[]);

public:
    Graph(int V);

    void addEdge(int v, int w);

    void DFS(int v);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph ::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); i++)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

void Graph ::DFS(int v)
{
    bool *visited = new bool[V];

    for (int i = 0; i < V; i++)
        visited[i] = false;

    DFSUtil(v, visited);
}

int main()
{
    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);
}

//second code
#include <bits/stdc++.h>
using namespace std;

void dfs(int s, vector<int> g[], bool *vis)
{
    vis[s] = true;
    cout << s << " ";
    for (int i = 0; i < g[s].size(); i++)
    {
        if (vis[g[s][i] == false])
            dfs(g[s][i], g, vis);
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> g[V];
        bool vis[V];

        memset(vis, false, sizeof(vis));

        for (int i = 0; i < E; i++)
        {
            int src, dest;
            cin >> src >> dest;
            g[src].push_back(dest);
            g[dest].push_back(src);
        }

        dfs(0, g, vis);
        cout << endl;
    }

    return 0;
}