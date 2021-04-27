class Solution
{
public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector<int> findPairs(int arr[], int n)
    {
        vector<int> v;
        unordered_map<int, bool> m;

        for (int i = 0; i < n; i++)
        {
            if (m[abs(arr[i])] == 0)
                m[abs(arr[i])] = 1;
            else
            {
                v.push_back((-1) * abs(arr[i]));
                v.push_back(abs(arr[i]));
                m[abs(arr[i])] = 0;
            }
        }

        return v;
    }
};