string removePair(string str)
{
    // Your code here
    string ans = "";
    stack<char> s;
    s.push(str[0]);
    for (int i = 1; i < str.length(); i++)
    {
        if (!s.empty() && str[i] == s.top())
            s.pop();
        else
            s.push(str[i]);
    }

    while (!s.empty())
    {
        ans += s.top();
        s.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}