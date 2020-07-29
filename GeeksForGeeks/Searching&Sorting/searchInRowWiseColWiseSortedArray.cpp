int search(int n, int m, int x, int mat[SIZE][SIZE])
{
    int i(0), j(m - 1);

    while (i >= 0 && i < n && j >= 0 && j < m)
    {
        if (mat[i][j] == x)
            return 1;
        else if (mat[i][j] > x)
            j--;
        else if (mat[i][j] < x)
            i++;
    }
    return 0;
}