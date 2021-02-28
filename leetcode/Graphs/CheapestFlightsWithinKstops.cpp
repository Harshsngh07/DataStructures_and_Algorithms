class Solution
{
public:
    void dfs(vector<vector<int>> &adj, vector<vector<int>> &cost, int src, int dst, int k, int &fare, int totalCost, vector<bool> &visited)
    {
        if (k < -1)
            return;
        if (src == dst)
        {
            fare = min(fare, totalCost);
            return;
        }

        visited[src] = true;
        for (int i = 0; i < adj[src].size(); i++)
        {
            if (!visited[adj[src][i]] && (totalCost + cost[src][adj[src][i]] <= fare))
                dfs(adj, cost, adj[src][i], dst, k - 1, fare, totalCost + cost[src][adj[src][i]], visited);
        }
        visited[src] = false;
    }

    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
    {
        vector<vector<int>> adj(n);
        vector<vector<int>> cost(n + 1, vector<int>(n + 1));

        for (int i = 0; i < flights.size(); i++)
        {
            adj[flights[i][0]].push_back(flights[i][1]);
            cost[flights[i][0]][flights[i][1]] = flights[i][2];
        }

        vector<bool> visited(n + 1, false);
        int fare = INT_MAX;
        dfs(adj, cost, src, dst, k, fare, 0, visited);

        if (fare == INT_MAX)
            return -1;
        return fare;
    }
};