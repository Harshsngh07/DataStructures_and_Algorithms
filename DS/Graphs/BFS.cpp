//BFS is same like BFS of trees
// That is it first traverses the given vertices and then pushes all the adjacent vertices of the given
// vertices

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], int V)
{
    bool visited[V + 1];

    for (int i = 1; i <= V; i++)
        visited[i] = false;

    queue<int> q;

    int s = 1;
    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int i = 0; i < adj[node].size(); i++)
        {
            if (visited[adj[node][i]] == false)
            {
                visited[adj[node][i]] = true;
                q.push(adj[node][i]);
            }
        }
    }
}

int main()
{
    int V = 6;
    vector<int> adj[V + 1];
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);
    BFS(adj, V);
}

//second code
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void bfs(int s, vector<int> adj[], bool vis[], int V)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while(!q.empty())
    {
        int curr =  q.front();
        cout << curr << " ";
        q.pop();
        for(int i=0;i<adj[curr].size();i++)
        {
            if(vis[adj[curr][i]]==false)
            {
                vis[adj[curr[i]]]=true;
                q.push(adj[curr][i]);
            }
        }
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
        vector<int> adj(V);
        bool vis[V] = {false};

        for (int i = 0; i < E; i++)
        {
            int src, dest;
            cin >> src >> dest;
            adj[src].push_back(dest);
        }

        bfs(0,adj,vis,V);
    }
}