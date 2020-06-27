class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {

        priority_queue<int, vector<int>, greater<int>> minH;

        for (int i = 0; i < nums.size(); i++)
        {
            minH.push(nums[i]);
            if (minH.size() > k)
                minH.pop();
        }

        return minH.top();
    }
};

// alittle faster method
int KthLargest(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minH;

    for (int i = 0; i < n; i++)
    {
        if (minH.size() == k && minH.top() < arr[i])
        {
            minH.pop();
            minH.push(arr[i]);
        }
        else if (minH.size() < k)
            minH.push(arr[i]);
    }

    return minH.top();
}