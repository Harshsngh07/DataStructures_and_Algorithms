//My solution 5% faster
class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int n = arr.size();
        //int last = arr[n-1];
        int count(0), ans(0);
        vector<int>::iterator it;
        for (int i = 1; i < 2001; i++)
        {
            int ser = i;
            it = find(arr.begin(), arr.end(), ser);
            if (it == arr.end())
                count++;
            if (count == k)
            {
                ans = i;
                break;
            }
        }

        return ans;
    }
};

//75% faster
class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        for (auto a : arr)
            if (a <= k)
                k++;
        return k;
    }
};

// 75%
class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int next = 1;
        for (int i = 0; i < arr.size(); ++i)
        {

            int temp = arr[i] - next;
            if (k - temp <= 0)
                break;
            k -= temp;
            next = arr[i] + 1;
        }
        return next + k - 1;
    }
};