class Solution {
public:
        vector<int> shortestToChar(string S, char C) {
        set<int>s; int currentMin(INT_MAX);vector<int>ans{};
        for(int i=0;i<S.length();i++) if(S[i]==C) s.insert(i);
        for(int i=0;i<S.length();i++){
            for(auto x:s){
                if(abs(i-x)<currentMin) currentMin=abs(i-x);
            }
            ans.push_back(currentMin);
            currentMin=INT_MAX;
        }
        return ans;
    }
};

//O(n)
class Solution
{
public:
    vector<int> shortestToChar(string s, char c)
    {
        int n = s.length();
        int prev(INT_MIN / 2);
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
                prev = i;
            v[i] = i - prev;
        }

        prev = INT_MAX / 2;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == c)
                prev = i;
            v[i] = min(v[i], prev - i);
        }

        return v;
    }
};