class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int len = digits.size();

        for (int i = len - 1; i >= 0; i--)
        {
            if (digits[i] == 9)
                digits[i] = 0;
            else
            {
                digits[i]++;
                return digits;
            }
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();