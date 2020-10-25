class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool> v(100005);
        v[1] = true;
        v[2] = false;
        v[3] = true;
        
        vector<int> sq;
        sq.push_back(1);
        for(int i=4;i<=n;i++)
        {
            int sr = sqrt(i);
            if(i==sr*sr)
            {
                v[i] = true;
                sq.push_back(i);
                continue;
            }
            bool flag=0;
            for(int j=0;j<(int)sq.size();j++)
            {
                if(v[i-sq[j]]==false)
                {
                    v[i] = true;
                    flag = 1;
                    break;
                }
                
            }
            if(flag==0)
                v[i] = false;
        }
        return v[n];
    }
};