void printNos(int N)
{
    if(N>0)
    {
        printNos(N-1);
        cout << N << " ";
    }
    return;
}