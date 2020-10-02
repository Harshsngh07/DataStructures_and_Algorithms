#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        long long sum(0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        long long ans = 1;
        long long i = 0, w = arr[0];
        while (w != 0)
        {
            if (w < k)
                break;
            else
            {
                w -= k;
                ans++;
                if (i < n - 1)
                {
                    w += arr[i + 1];
                    i++;
                }
                else
                {
                    ans += w / k;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
