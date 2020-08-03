class Solution
{
public:
    bool isPalindrome(string s)
    {
        if (s == " ")
            return true;

        int n = s.length();
        int left(0), right(n - 1);
        while (right - left >= 1)
        {
            while (left < right && !isalnum(s[left]))
                left++;
            while (left < right && !isalnum(s[right]))
                right--;
            if (tolower(s[left]) != tolower(s[right]))
                return false;
            left++;
            right--;
        }
        return true;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
