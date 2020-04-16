#include <iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        //finding out the smallest index in the unsorted array
        int minIndex = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (a[j] < a[minIndex])
                minIndex = j;
        }
        //swapping after the inner loop
        swap(a[i], a[minIndex]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << ",";
}