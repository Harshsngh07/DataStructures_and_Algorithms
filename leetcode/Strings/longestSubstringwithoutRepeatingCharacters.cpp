class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        
        vector<int> lastIndex(256,-1);
        
        int res(0);
        int i(0);
        
        for(int j=0;j<n;j++)
        {
            i = max(i , lastIndex[s[j]] + 1);
            
            res = max(res, j-i+1);
            
            lastIndex[s[j]] = j;
        }
        
        return res;
    }
};

//approach 2 hashing
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();

        if (n == 0)
            return 0;

        set<char> st;

        int i(0), j(0), res(0);

        while (j < n)
        {
            if (st.count(s[j]) == 0)
            {
                st.insert(s[j]);
                res = max(res, (int)st.size());
                j++;
            }
            else
            {
                st.erase(s[i]);
                i++;
            }
        }

        return res;
    }
};