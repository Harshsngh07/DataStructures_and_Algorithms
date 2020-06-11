//approach 1 O(N)

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int count0(0), count1(0), count2(0);

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                count0++;
            else if (nums[i] == 1)
                count1++;
            else
                count2++;
        }

        for (int i = 0; i < count0; i++)
            nums[i] = 0;

        for (int i = count0; i < count0 + count1; i++)
            nums[i] = 1;

        for (int i = count0 + count1; i < count0 + count1 + count2; i++)
            nums[i] = 2;
    }
};

//approach 2 O(N)

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int low(0), med(0), high(nums.size() - 1);

        while (med <= high)
        {
            if (nums[med] == 0)
            {
                swap(nums[med], nums[low]);
                low++;
                med++;
            }
            else if (nums[med] == 1)
                med++;
            else
            {
                swap(nums[med], nums[high]);
                high--;
            }
        }
    }
};


//approach 3 one pass
void sortColors(int A[], int n)
{
    int j = 0, k = n - 1;
    for (int i = 0; i <= k; i++)
    {
        if (A[i] == 0)
            swap(A[i], A[j++]);
        else if (A[i] == 2)
            swap(A[i--], A[k--]);
    }
}