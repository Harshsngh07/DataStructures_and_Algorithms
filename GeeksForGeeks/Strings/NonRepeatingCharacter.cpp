class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       int freq[256];
       
       memset(freq, -1, sizeof(freq));
       
       for(int i=0;i<S.length();i++)
       {
           if(freq[S[i]]==-1)
                freq[S[i]] = i;
           else
                freq[S[i]] = -2;
       }
       int res = INT_MAX;
       
       for(int i=0;i<256;i++)
       {
           if(freq[i]>=0)
                res = min(res, freq[i]);
       }
       
       if(res==INT_MAX) return '$';
       
      
       return S[res];
    }

};