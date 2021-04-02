class Solution
{
public:
    int maxValue(int arr[], int N)
    {
        int min = arr[0];
        int max = arr[0];

        for (int i = 0; i < N; ++i)
        {
            int curr = arr[i] + i;
            if (curr < min)
                min = curr;
            if (curr > max)
                max = curr;
        }

        int pass1result = max - min;

        min = arr[N - 1];
        max = arr[N - 1];

        for (int i = 0; i < N; ++i)
        {
            int curr = arr[N - 1 - i] + i;
            if (curr < min)
                min = curr;
            if (curr > max)
                max = curr;
        }

        int pass2result = max - min;
        return pass1result > pass2result ? pass1result : pass2result;
    }
};