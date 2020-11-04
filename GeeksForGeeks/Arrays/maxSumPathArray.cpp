int max_path_sum(int ar1[], int ar2[], int m, int n)
{
    int i = 0, j = 0;
    int  result = 0, sum1 = 0, sum2 = 0;
    
    // Using two pointers to iterate over two arrays
    while (i < m && j < n)
    {
        // if ar1 is smaller than ar2, incresing ar1 and adding its value to sum1
        if (ar1[i] < ar2[j])
            sum1 += ar1[i++];
        // if ar2 is smaller than ar1, incresing ar2 and adding its value to sum2
        else if (ar1[i] > ar2[j])
            sum2 += ar2[j++];
        // if ar1=ar2, checking the maximum sum obtained from both the arrays
        // updating result and sum1 and sum2 is again changed to zero
        else
        {
            result += max(sum1, sum2);
            sum1 = 0, sum2 = 0;
            while (i < m &&  j < n && ar1[i] == ar2[j])
            {
                result = result + ar1[i++];
                j++;
            }
        }
    }
    // if jth pointer reaches end
    while (i < m)
        sum1  +=  ar1[i++];
    // if ith pointer reaches end
    while (j < n)
        sum2 +=  ar2[j++];
        
    // last maximum sum to be added after the end of the loop
    result +=  max(sum1, sum2);
    
    return result;
}