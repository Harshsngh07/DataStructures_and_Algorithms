double fractionalKnapsack(int W, Item arr[], int n)
{

    sort(arr, arr + n, comparison);

    int currWeight(0);
    double finalValue(0.0);

    for (int i = 0; i < n; i++)
    {
        if (currWeight + arr[i].weight <= W)
        {
            currWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        else
        {
            int remain = W - currWeight;
            finalValue += arr[i].value * ((double)remain / arr[i].weight);
            break;
        }
    }

    return finalValue;
}