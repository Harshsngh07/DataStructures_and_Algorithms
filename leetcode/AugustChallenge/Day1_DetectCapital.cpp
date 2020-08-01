class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int upper(0), lower(0), mixed(0);
        for (int i = 0; i < word.length(); i++)
        {
            if (isupper(word[i]))
                upper++;
            else if (islower(word[i]))
                lower++;
        }

        for (int i = 1; i < word.length(); i++)
        {
            if (isupper(word[0]) && islower(word[i]))
                mixed++;
        }

        if (upper == word.length() || lower == word.length() || mixed + 1 == word.length())
            return true;

        return false;
    }
};