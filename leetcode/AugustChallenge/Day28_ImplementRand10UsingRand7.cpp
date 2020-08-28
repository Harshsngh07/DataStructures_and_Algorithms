class Solution
{
public:
    int rand10()
    {
        int r = 40;
        while (r >= 40)
        {
            r = 7 * (rand7() - 1) + rand7() - 1;
        }
        r = r % 10 + 1;
        return r;
    }
};