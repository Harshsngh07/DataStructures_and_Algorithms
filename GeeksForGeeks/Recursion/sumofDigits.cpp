// recursive approach
int sumOfDigits(int n)
{
    if (n < 10)
        return n;
    return n % 10 + sumOfDigits(n / 10);
}

//not recursive
int sumOfDigits(int n)
{
    int sum(0);
    while (n > 0)
    {
        int r = n % 10;
        sum += r;
        n = n / 10;
    }
    return sum;
}