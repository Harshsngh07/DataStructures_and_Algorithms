class Solution
{
public:
    int hammingWeight(uint32_t n)
    {

        unsigned int count(0);

        while (n)
        {
            count += n & 1;
            n >>= 1;
        }

        return count;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();