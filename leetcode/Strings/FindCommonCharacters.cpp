class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> mainCnt(26,0);
        vector<int> tempCnt(26,0);
        
        for(int i=0;i<A[0].length();i++)
            mainCnt[A[0][i]-'a']++;
        
        for(int i=0;i<26;i++)
            cout << mainCnt[i] << " "; 
        cout << endl;
        
        for(int i=1;i<A.size();i++)
        {
            for(int j=0;j<A[i].length();j++)
                tempCnt[A[i][j]-'a']++;
            
            for(int i=0;i<26;i++)
                cout << tempCnt[i] << " "; 
            cout << endl;
            
            
            for(int j=0;j<26;j++)
            {
                mainCnt[j] = min(mainCnt[j],tempCnt[j]);
                tempCnt[j] = 0;
            }
        }
        
        for(int i=0;i<26;i++)
            cout << mainCnt[i] << " "; 
        cout << endl;
        
        vector<string> ans;
        for(int i=0;i<26;i++)
        {
            if(mainCnt[i]>0)
            {
                while(mainCnt[i]--)
                {
                    string temp = "";
                    temp += i+'a';
                    ans.push_back(temp);            
                }
            }
        }
        
        return ans;
    }
};