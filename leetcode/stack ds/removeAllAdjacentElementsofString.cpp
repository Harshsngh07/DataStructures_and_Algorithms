class Solution
{
public:
    string removeDuplicates(string S)
    {

        string ans = "";
        stack<char> s;
        s.push(S[0]);
        for (int i = 1; i < S.length(); i++)
        {
            if (!s.empty() && S[i] == s.top())
                s.pop();
            else
                s.push(S[i]);
        }

        while (!s.empty())
        {
            ans += s.top();
            s.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};