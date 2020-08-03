void rotateArr(int arr[], int d, int n)
{

    reverse(arr, arr + d);

    // now reverse the last n-d elements
    reverse(arr + d, arr + n);

    // finally, reverse the whole array
    reverse(arr, arr + n);
}
