vector<string> generate(ll n)
{
    queue<string> q;
    q.push("1");
    vector<string> str;
    while (n--)
    {
        string s1 = q.front();
        q.pop();
        str.push_back(s1);

        string s2 = s1;

        q.push(s1.append("0"));

        q.push(s2.append("1"));
    }

    return str;
}