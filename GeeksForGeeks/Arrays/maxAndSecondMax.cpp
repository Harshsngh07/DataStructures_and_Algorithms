vector<int> largestAndSecondLargest(int sizeOfArray, int arr[])
{
    int max = INT_MIN, max2 = INT_MIN;

    /*********************************
     * Your code here
     * This function should return a
     * vector with first element as
     * max and second element as 
     * second max
     * *******************************/
    //sort(arr,arr+sizeOfArray,greater<int>());

    vector<int> v(2);

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }

        else if (arr[i] > max2 && arr[i] != max)
            max2 = arr[i];
    }

    if (max2 == INT_MIN)
        max2 = -1;

    v[0] = max;
    v[1] = max2;

    return v;
}