bool isLucky(int n, int &counter)
{
    int nxtPos = n;

    if (counter > n)
        return 1;
    if (nxtPos % counter == 0)
        return 0;

    nxtPos -= nxtPos / counter;
    counter++;
    return isLucky(nxtPos, counter);
}