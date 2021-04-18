// time 0.33 sec
class Solution {
    public:
    string exercise(int N, int M, vector<vector<int>> A, int src, int dest, int X){
        vector<vector<pair<long long, long long>>> adj(N);
        for(int i = 0; i < M; i++){
            adj[A[i][0]].push_back({A[i][1], A[i][2]});
            adj[A[i][1]].push_back({A[i][0], A[i][2]});
        }
        vector<long long> dist(N, 1e18);
        dist[src]=0;
        set<pair<long long, long long>> st;
        st.insert({0, src});
        while(1){
            if(st.empty())
                break;
            long long f=(*st.begin()).second;
            st.erase(st.begin());
            for(int i = 0; i < adj[f].size(); i++){
                if(dist[adj[f][i].first] > dist[f] + adj[f][i].second){
                    st.erase({dist[adj[f][i].first], adj[f][i].first});
                    dist[adj[f][i].first] = dist[f] + adj[f][i].second;
                    st.insert({dist[adj[f][i].first], adj[f][i].first});
                }
            }
        }
       if(dist[dest] > (long long )X){
            return "Neeman's Wool Joggers";
        }
        else{
            return "Neeman's Cotton Classics";
        }
    }
};


// time 2.01 secs

class Solution
{
    public:
    string exercise(int N, int M, vector<vector<int>> A, int src, int dest, int X)
    {
        vector<vector<int>> graph(N, vector<int> (N, 0));
        
        for(int i = 0; i < A.size(); i++)
        {
            int u = A[i][0];
            int v = A[i][1];
            int d = A[i][2];
            
            graph[u][v] = d;
            graph[v][u] = d;
        }
        
        vector<int> dist(N, INT_MAX);
        dist[src] = 0;
        
        vector<bool> visited(N, false);
        
        priority_queue<pair<int, int="">, vector<pair<int, int="">>, greater<pair<int, int="">>> pq;
        
        pq.push({0, src});
        
        while(!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();
            
            visited[u] = true;
            
            for(int v = 0; v < N; v++)
            {
                if(graph[u][v] != 0 and visited[v] == false)
                {
                    if(dist[v] > dist[u] + graph[u][v])
                    {
                        dist[v] = dist[u] + graph[u][v];
                        
                        pq.push({dist[v], v});
                    }
                }
            }
        }
        
        
        return dist[dest] > X ? "Neeman's Wool Joggers" : "Neeman's Cotton Classics";
    }
};