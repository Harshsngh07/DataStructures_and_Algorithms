//o(n) space o(1)
class Solution
{
public:
    int longestMountain(vector<int> &a)
    {
        int n = a.size();
        int i = 0, start = 0, top = -1, len = 0;
        while (i < n)
        { //find the start of mountain
            while (i < n - 1 and a[i] >= a[i + 1])
                i++, start++;
            if (i == n - 1)
                break;
            //see if the peak is really the peak
            while (i < n - 1 and a[i] < a[i + 1])
                i++, top = i;
            //find the end of mountain
            while (i < n - 1 and a[i] > a[i + 1])
                i++;
            //calculate the total length
            if (top < i)
                len = max(len, i - start + 1);
            start = i;
        }
        return len;
    }
};

//O(n) space = O(n)

class Solution
{
public:
    int longestMountain(vector<int> &A)
    {
        int n = A.size();
        if (n < 3)
            return 0;
        int mountain(0);
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        for (int i = 1; i < n; i++)
        {
            if (A[i] > A[i - 1])
                left[i] = left[i - 1] + 1;
        }

        for (int i = n - 2; i >= 0; i--)
        {
            if (A[i] > A[i + 1])
            {
                right[i] = right[i + 1] + 1;
            }
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (A[i] > A[i - 1] && A[i] > A[i + 1])
                mountain = max(mountain, left[i] + right[i] + 1);
        }

        return mountain;
    }
};