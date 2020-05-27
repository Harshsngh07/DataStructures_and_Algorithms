bool isPowerofTwo(long long n)
{

    int res = n & (n - 1);

    if (res == 0)
        return true;
    return false;
}