class Solution
{
public:
    int reverse(int x)
    {
        int num = abs(x);
        bool signedBit = ((x >> 31) != 0);

        int rev = 0;
        while (num > 0)
        {
            int n1 = num % 10;
            num = num / 10;
            if (rev > INT_MAX / 10)
                return 0;
            rev = (rev * 10) + n1;
        }

        return (signedBit) ? -rev : rev;
    }
};