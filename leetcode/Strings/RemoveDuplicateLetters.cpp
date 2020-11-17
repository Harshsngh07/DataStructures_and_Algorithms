class Solution
{
public:
    string removeDuplicateLetters(string s)
    {

        int n = s.length();
        int lastIndex[26];
        memset(lastIndex, -1, sizeof(lastIndex));

        for (int i = 0; i < n; i++)
        {
            lastIndex[s[i] - 'a'] = i;
        }

        bool visited[26];
        memset(visited, false, sizeof(visited));

        stack<char> stk;
        for (int i = 0; i < n; i++)
        {
            if (visited[s[i] - 'a'] == true)
                continue;
            while (!stk.empty() && s[i] < stk.top() && lastIndex[stk.top() - 'a'] > i)
            {
                visited[stk.top() - 'a'] = false;
                stk.pop();
            }
            stk.push(s[i]);
            visited[s[i] - 'a'] = true;
        }

        string ans = "";

        while (!stk.empty())
        {
            ans += stk.top();
            stk.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};