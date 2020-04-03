#include <iostream>
using namespace std;

int main()
{
    int a[4] = {2, 7, 11, 15};
    int target = 17;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; i <= 3; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << i << " " << j;
            }
        }
    }
}