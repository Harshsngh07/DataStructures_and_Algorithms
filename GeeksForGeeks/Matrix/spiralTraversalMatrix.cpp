void spirallyTraverse(int m, int n, int ar[SIZE][SIZE])
{

    int top(0), left(0), bottom(m - 1), right(n - 1);

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            cout << ar[top][i] << " ";
        top++;

        for (int i = top; i <= bottom; i++)
            cout << ar[i][right] << " ";
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                cout << ar[bottom][i] << " ";
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                cout << ar[i][left] << " ";
            left++;
        }
    }
}
