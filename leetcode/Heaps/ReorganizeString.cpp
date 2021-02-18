class Solution {
public:
    string reorganizeString(string S) {
        string ans = "";
        int n = S.length();
        int freq[26]={0};
        for(int i=0;i<n;i++)
            freq[(int)(S[i]-'a')]++;
        
        priority_queue<pair<int,char>> q;
        
        for(int i=0;i<26;i++)
        {
            if(freq[i]>0) q.push(make_pair(freq[i],(char)('a'+i)));
        }
        
        while(!q.empty())
        {
            if(q.size()>=2)
            {
                pair<int, char> p1;
                pair<int, char> p2;
                
                p1 = q.top();
                q.pop();
                p2 = q.top();
                q.pop();
                ans+=p1.second;
                ans+=p2.second;
                p1.first--;
                p2.first--;
                if(p1.first) q.push(p1);
                if(p2.first) q.push(p2);
            }
            else if(q.size()==1)
            {
                if(q.top().first>1)
                    return "";
                else
                {
                    ans+=q.top().second;
                    q.pop();                    
                }
                
            }
        }
        
        return ans;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();