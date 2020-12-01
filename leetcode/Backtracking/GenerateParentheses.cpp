class Solution {
public:
    
    void findAll(string curr, int open, int close, vector<string>& result, int n)
    {
        if(curr.length()==2*n)
        {
            result.push_back(curr);
            return;
        }
        
        if(open<n) findAll(curr+"(", open+1, close, result, n);
        if(close<open) findAll(curr+")", open, close+1, result, n);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        findAll("(", 1, 0, result, n);
        return result;
    }
};