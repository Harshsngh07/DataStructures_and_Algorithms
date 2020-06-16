bool areIsomorphic(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    bool marked[256] = {false};

    int map[256];

    memset(map, -1, sizeof(map));

    for (int i = 0; i < str2.length(); i++)
    {
        if (map[str1[i]] == -1)
        {
            if (marked[str2[i]] == true)
                return false;

            marked[str2[i]] = true;

            map[str1[i]] = str2[i];
        }
        else if (map[str1[i]] != str2[i])
            return false;
    }

    return true;
}