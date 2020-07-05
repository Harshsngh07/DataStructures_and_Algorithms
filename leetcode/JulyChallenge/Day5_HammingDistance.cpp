class Solution
{
public:
    int countSetBits(int n)
    {
        //Brian Kernigan Algorithm
        unsigned int v = (unsigned)n;
        unsigned int c;
        for (c = 0; v; c++)
            v &= v - 1;
        return (int)c;
    }

    int hammingDistance(int x, int y)
    {
        return countSetBits(x ^ y);
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();