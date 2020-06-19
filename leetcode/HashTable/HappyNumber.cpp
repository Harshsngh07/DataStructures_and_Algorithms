//O(n) space complexity

class Solution
{
public:
    int squareSum(int n)
    {
        int squareSum(0);
        while (n)
        {
            squareSum += (n % 10) * (n % 10);
            n /= 10;
        }
        return squareSum;
    }

    bool isHappy(int n)
    {
        set<int> s;

        while (1)
        {
            n = squareSum(n);
            if (n == 1)
                return true;

            if (s.find(n) != s.end())
                return false;
            s.insert(n);
        }
    }
};

//O(1) space complexity 100% faster solution

class Solution
{
public:
    int squareSum(int n)
    {
        int squareSum(0);
        while (n)
        {
            squareSum += (n % 10) * (n % 10);
            n /= 10;
        }
        return squareSum;
    }

    bool isHappy(int n)
    {
        int slow(n), fast(n);

        do
        {
            slow = squareSum(slow);
            fast = squareSum(squareSum(fast));
        } while (slow != fast);

        return (slow == 1);
    }
};