int alternatingCharacters(string s)
{

    int len = s.length();
    int cnt(0), ans(0);
    for (int i = 0; i < len; i++)
    {
        if (i == 0 || s[i] == s[i - 1])
            cnt++;
        else
        {
            if (cnt > 1)
                ans += cnt - 1;
            cnt = 1;
        }
    }
    if (cnt > 1)
        ans += cnt - 1;
    return ans;
}