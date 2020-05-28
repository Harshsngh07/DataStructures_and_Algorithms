class Solution
{
public:
    int countSetBits(unsigned int n)
    {
        unsigned int count(0);

        while (n)
        {
            count += n & 1;
            n >>= 1;
        }

        return count;
    }

    vector<int> countBits(int num)
    {
        vector<int> res;
        int ans(0);
        for (int i = 0; i <= num; i++)
        {
            ans = countSetBits(i);
            res.push_back(ans);
        }

        return res;
    }
};