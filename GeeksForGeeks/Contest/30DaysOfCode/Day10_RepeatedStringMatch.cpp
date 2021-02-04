class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        
        string s = A;
        int count(1);
        while(s.length()<B.length())
        {
            s+=A;
            count++;
        }
        if(s.find(B)!=string::npos)
            return count;
        if((s+A).find(B)!=string::npos)
            return count+1;
        return -1;
    }
  
};