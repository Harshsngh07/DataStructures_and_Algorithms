class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        vector<bool>friends(M.size(),false);
        stack<int> s;
        int circles(0);
        for(int i=0;i<M.size();i++){
            if(!friends[i]){
                circles++;
                s.push(i);
                while(!s.empty()){
                    int curr = s.top();
                    s.pop();
                    friends[curr]= true;
                    
                    for(int i=0;i<M[curr].size();i++)
                        {
                        if(!friends[i] && M[curr][i]==1)
                            s.push(i);
                        }
                    }
                }
                
                
            }
        return circles;
    }
};
