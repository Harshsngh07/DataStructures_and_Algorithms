class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int> m;
        m['I']=1; m['V']=5; m['X']=10; m['L']=50; m['C']=100; m['D']=500; m['M']=1000;
        
        int i,n=s.length(),k=0;
        
        for(i=0;i<n;i++)
        {
            if(i!=n-1 && m[s[i]]<m[s[i+1]])
            {
                k+=m[s[i+1]]-m[s[i]];
                i++;
            }
            else
                k+=m[s[i]];
        }
        
        return k;
    }
};