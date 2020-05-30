void transpose(int A[][N], int n)
{
    // Your code here
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(A[i][j], A[j][i]);
}