// o(n+m) complexity
void merge(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //n is size of arr1
    //m is size of arr2
    for (int i = m - 1; i >= 0; i--)
    {
        int j, last = arr1[n - 1];
        for (j = n - 2; j >= 0 && arr1[j] > arr2[i]; j--)
            arr1[j + 1] = arr1[j];

        if (j != n - 2 || last > arr2[i])
        {
            arr1[j + 1] = arr2[i];
            arr2[i] = last;
        }
    }
}

//o((n+m) log(n+m)) complexity
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

void merge(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //n is size of arr1
    //m is size of arr2
    int i, j, gap = n + m;
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);

        //comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);

        if (j < m)
        {
            //comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}
