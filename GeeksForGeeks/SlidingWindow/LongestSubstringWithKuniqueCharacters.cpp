int longestKSubstr(string s, int k) {
    // your code here
    int n = s.length();
    int i(0), j(0);
    int ans(0);
    unordered_map<char, int> m;
    while(j<n)
    {
        m[s[j]]++;
        
        if(m.size()==k)
            ans = max(ans, j-i+1);
            
        else if(m.size()>k)
        {
            while(m.size()>k)
            {
                m[s[i]]--;
                if(m[s[i]]==0)
                    m.erase(s[i]);
                i++;
            }
        }
        j++;
    }
    return ans>0 ? ans : -1;
}