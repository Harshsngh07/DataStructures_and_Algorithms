class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int max_length(1);
        int st(0), end(0);
        
        //odd length
        for(int i=0;i<n;i++)
        {
            int l(i), r(i);
            while(l>=0 && r<n)
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else break;
            }
            
            int len = r-l-1;
            if(len>max_length)
            {
                max_length = len;
                st = l+1;
                end = r-1;
            }
        }
        
        //even length
        for(int i=0;i<n;i++)
        {
            int l(i), r(i+1);
            while(l>=0 && r<n)
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else break;
            }
            
            int len = r-l-1;
            if(len>max_length)
            {
                max_length = len;
                st = l+1;
                end = r-1;
            }
        }
        
        return s.substr(st, max_length);
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();