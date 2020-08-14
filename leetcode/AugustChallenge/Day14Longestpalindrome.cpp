class Solution {
public:
    int longestPalindrome(string s) {
        int ans(0);
        
        unordered_map<char, int> m;
        
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        
        for(auto count: m)
        {
            if((count.second)%2==0)
                ans += count.second;
            else if((count.second)/2 >=1)
                ans += count.second -1;
        }
        
        return ans + (s.length()>ans ? 1: 0);
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();