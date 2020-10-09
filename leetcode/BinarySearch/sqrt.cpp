class Solution
{
public:
    int mySqrt(int x)
    {
        if (x < 2)
            return x;
        int l(0), h(x);

        while (l <= h)
        {
            long long mid = (l + h) / 2;
            if (mid * mid == x)
                return mid;
            else if (mid * mid < x)
                l = mid + 1;
            else if (mid * mid > x)
                h = mid - 1;
        }

        return l - 1;
    }
};