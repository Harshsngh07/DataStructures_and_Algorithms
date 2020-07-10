vector <int> bfs(vector<int> g[], int N) {

    // Your code here
    vector<int> ans;
    
    vector<int> visited(N,0);
    
    
    
    queue<int> q;
    
    
    q.push(0);
    
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        
        for(auto i : g[node])
        {
            if(visited[i] == false)
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    
    return ans;
}