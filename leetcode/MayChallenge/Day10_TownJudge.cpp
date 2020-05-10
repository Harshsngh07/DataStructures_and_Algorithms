class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        map<int,int> count;
        
        for(auto c: trust)
        {
            count[c[0]]--;
            count[c[1]]++;  
            
        }
        
        for(int i=1;i<=N;i++)
            if(count[i]==N-1) return i;
        return -1;
    }
};
