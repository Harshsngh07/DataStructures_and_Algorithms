bool isAnagram(string c, string d)
{

    if (c.length() != d.length())
        return false;

    // Your code here
    int alpha[26] = {0};

    for (int i = 0; i < c.length(); i++)
    {
        alpha[c[i] - 'a']++;
        alpha[d[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
        if (alpha[i] > 0)
            return false;
    return true;
}