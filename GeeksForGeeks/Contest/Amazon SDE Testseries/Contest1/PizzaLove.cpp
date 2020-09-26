// not able to solve

int maxPizza(int n , int arr[])
{
    int maxSum(0),inc(arr[0]),exc(0),exc_n(0);
    for(int i=1;i<n;i++)
    {
       exc_n = max(inc, exc);
       inc = exc + arr[i];
       exc = exc_n;
       
    }
    maxSum = max(inc, exc);
    return maxSum;
}