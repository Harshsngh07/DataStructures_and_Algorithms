class Solution
{
public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        unordered_map<int, int> m;
        unordered_map<int, int>::iterator it;

        int prefixSum(0), count(0);

        for (int i = 0; i < n; i++)
        {
            prefixSum += arr[i];

            if (prefixSum == sum)
                count++;

            it = m.find(prefixSum - sum);
            if (it != m.end())
                count += it->second;

            m[prefixSum]++;
        }

        return count;
    }
};