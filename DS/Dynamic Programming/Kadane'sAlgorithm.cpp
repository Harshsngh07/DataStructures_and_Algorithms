#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// function to return the max sum in an array of both +ve and -ve integers.
int maxSubarray(int a[], int size)
{
    int max_sofar(INT_MIN), max_ending(0);

    for (int i = 0; i < size; i++)
    {
        max_ending += a[i];
        if (max_ending < a[i])
            max_ending = a[i];

        if (max_sofar < max_ending)
            max_sofar = max_ending;
    }
    return max_sofar;
}

//returns the index also
int maxSubarraySum(int a[], int size)
{
    int max_sofar(INT_MIN), max_ending(0), start(0), end(0), s(0);

    for (int i = 0; i < size; i++)
    {
        max_ending += a[i];
        if (max_ending < 0)
        {
            max_ending = 0;
            s = i + 1;
        }

        if (max_sofar < max_ending)
        {
            max_sofar = max_ending;
            start = s;
            end = i;
        }
    }
    cout << "starting index " << start << endl
         << "ending index " << end << endl;
    return max_sofar;
}

int main()
{

    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);
    int maxSum = maxSubarraySum(a, n);
    cout << "Maximum contiguous sum is " << maxSum << endl;
    return 0;
}