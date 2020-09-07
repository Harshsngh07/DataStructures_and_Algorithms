class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int n = pattern.size();
        vector<int> v(26,0);
        unordered_map<string, int> m; 
        
        stringstream ss(str); 
        
        string word; 
        int i=0;
        
        for(string word; ss>>word;i++)
        {
            if(i==n || v[pattern[i]-'a']!=m[word]) return false;
            
            v[pattern[i]-'a'] = m[word] = i+1;
            
        }
        
        return i==n;
    }
};