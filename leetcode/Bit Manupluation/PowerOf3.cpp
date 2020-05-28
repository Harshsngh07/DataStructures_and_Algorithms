class Solution
{
public:
    bool isPowerOfThree(int n)
    {

        return n > 0 && (1162261467 % n) == 0;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();