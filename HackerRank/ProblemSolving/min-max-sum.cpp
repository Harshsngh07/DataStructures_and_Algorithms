void miniMaxSum(vector<int> arr) {

    long long int minVal = *min_element(arr.begin(),arr.end());
    long long int maxVal = *max_element(arr.begin(),arr.end());
    long long int minSum(0),maxSum(0);

    for(int i=0;i<arr.size();i++)
    {
        minSum+=arr[i];
        maxSum+=arr[i];
    }

    minSum-=maxVal;
    maxSum-=minVal;


    cout<<minSum<<" "<<maxSum<<endl;
}
