class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        int a[26] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            a[s[i] - 'a']++;
            a[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
            if (a[i] > 0)
                return false;
        return true;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();