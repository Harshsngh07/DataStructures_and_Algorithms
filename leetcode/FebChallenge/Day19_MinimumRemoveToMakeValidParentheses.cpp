class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string str;
        int open(0);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                open++;
            else if(s[i]==')')
            {
                if(open==0)continue;
                open--;                
            }
            str.push_back(s[i]);
        }
        string result;
        for(int i=str.length()-1;i>=0;i--)
        {
            cout<< open << ' ';
            if(str[i]=='(' && open-- > 0)continue;
            result.push_back(str[i]);
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};