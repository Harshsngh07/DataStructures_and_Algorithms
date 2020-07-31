#include <iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    while (i < n)
        arr3[k++] = arr1[i++];

    while (j < m)
        arr3[k++] = arr2[j++];
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        int arr1[n], arr2[m], arr3[n + m];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < m; i++)
            cin >> arr2[i];

        merge(arr1, n, arr2, m, arr3);

        cout << arr3[x - 1] << endl;
    }

    return 0;
}