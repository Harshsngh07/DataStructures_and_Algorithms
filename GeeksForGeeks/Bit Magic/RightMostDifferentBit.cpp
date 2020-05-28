unsigned int getFirstSetBit(int n)
{

    // Your code here
    int pos(1);
    for (int i = 0; i < 32; i++)
    {
        if (!(n & (1 << i)))
            pos++;
        else
            break;
    }
    if (n == 0)
        return 0;
    return pos;
}

int posOfRightMostDiffBit(int m, int n)
{

    // Your code here
    return getFirstSetBit(m ^ n);
}