int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {

        count += n & 1;
        n >>= 1;
    }
    return count;
}

int countBitsFlip(int a, int b)
{

    // Your logic here
    int a_xor_b = a ^ b;
    return countSetBits(a_xor_b);
}