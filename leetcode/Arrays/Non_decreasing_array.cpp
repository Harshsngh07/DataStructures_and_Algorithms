#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int count = 0;
    for (int i = 0; i < n - 1 && count <= 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            if (i > 0)
            {

                if (nums[i - 1] <= nums[i + 1])
                    nums[i] = nums[i - 1];
                else
                    nums[i + 1] = nums[i];
            }
            count++;
        }
    }

    if (count == 1)
        cout << "true";
    else
        cout << "false";
}