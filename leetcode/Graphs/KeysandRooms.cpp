class Solution {
public:
    
   void dfs(vector<vector<int>>& rooms,int u,vector<bool>&vis)
    {
       vis[u]=true;
       for(auto i: rooms[u])
           if(!vis[i])
               dfs(rooms,i,vis);
   }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n,false);
        
        dfs(rooms,0,vis);
        
        for(auto i : vis)
        {
            if(!i) return false;
        }
        return true;
    }
    
};
