string twoStrings(string s1, string s2)
{
    unordered_map<char, int> count;
    for (auto c : s1)
        count[c]++;

    for (auto c : s2)
    {
        if (count.find(c) != count.end())
            return "YES";
    }
    return "NO";
}