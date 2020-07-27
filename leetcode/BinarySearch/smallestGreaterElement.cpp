class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    
    {
        int n = letters.size();
        if (n == 1 || target < letters[0] || target >= letters[n - 1])
            return letters[0];
        if (n == 2 && target > letters[0] && target < letters[1])
            return letters[1];

        int start(0), end(n - 1);
        while (start < end)
        {
            int mid = start + (end - start) / 2;

            if (letters[mid] <= target)
                start = mid + 1;
            else
                end = mid;
        }
        return letters[start];
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();