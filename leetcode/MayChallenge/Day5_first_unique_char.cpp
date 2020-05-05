class Solution {
public:
    int firstUniqChar(string s) {
        
       int res = INT_MAX;
        pair<int, int> a[256];

        
        for(int i=0;i<s.length();i++)
        {
            (a[s[i]].first)++;
            a[s[i]].second = i;
        }
        
        for(int i=0;i<256;i++)
        {
            if(a[i].first==1)
                res = min(res, a[i].second);         
        }
        
        
        return res == INT_MAX? -1 : res;
            
    }
    
