class Solution
{
public:
    bool isCycleUtil(vector<vector<int>> &adj, vector<int> &vis, int i)
    {
        if (vis[i] == 1)
            return true;
        if (vis[i] == 2)
            return false;

        vis[i] = 1;
        for (int j = 0; j < adj[i].size(); j++)
        {
            if (isCycleUtil(adj, vis, adj[i][j]))
                return true;
        }

        vis[i] = 2;
        return false;
    }

    bool isCycle(vector<vector<int>> &adj, int n)
    {
        vector<int> vis(n, 0);
        for (int i = 0; i < n; i++)
            if (!vis[i])
                if (isCycleUtil(adj, vis, i))
                    return true;

        return false;
    }

    void dfs(int i, vector<bool> &vis, vector<vector<int>> &adj, stack<int> &s)
    {
        vis[i] = true;
        for (int j = 0; j < adj[i].size(); j++)
        {
            if (!vis[adj[i][j]])
                dfs(adj[i][j], vis, adj, s);
        }
        s.push(i);
    }

    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        int n = prerequisites.size();
        vector<vector<int>> adj(numCourses);
        for (int i = 0; i < n; i++)
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);

        vector<int> ans;
        if (isCycle(adj, numCourses))
            return ans;

        vector<bool> vis(numCourses, false);
        stack<int> s;
        for (int i = 0; i < numCourses; i++)
        {
            if (!vis[i])
                dfs(i, vis, adj, s);
        }

        while (!s.empty())
        {
            int x = s.top();
            ans.push_back(x);
            s.pop();
        }

        return ans;
    }
};