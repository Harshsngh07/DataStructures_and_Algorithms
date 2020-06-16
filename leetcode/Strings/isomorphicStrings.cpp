class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {

        if (s.length() != t.length())
            return false;

        bool marked[256] = {false};

        int map[256];
        memset(map, -1, sizeof(map));

        for (int i = 0; i < t.length(); i++)
        {
            if (map[s[i]] == -1)
            {
                if (marked[t[i]] == true)
                    return false;

                marked[t[i]] = true;
                map[s[i]] = t[i];
            }
            else if (map[s[i]] != t[i])
                return false;
        }
        return true;
    }
};