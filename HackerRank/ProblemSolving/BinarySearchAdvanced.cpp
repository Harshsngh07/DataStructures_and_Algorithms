#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

  int first(int a[], int n, int target)
  {
        int low = 0;
        int high = n - 1;

        int res = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (a[mid] == target)
            {
                res = mid;
                high = mid - 1;
            }
            else if (a[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return res;
    }

    int last(int a[], int n, int target)
    {
        int low = 0;
        int high = n- 1;

        int res = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (a[mid] == target)
            {
                res = mid;
                low = mid + 1;
            }
            else if (a[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return res;
    }



int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int k;
    cin >> k;
    int f = first(a,n,k);
    int l = last(a,n,k);
    int count(0);
    if(f == -1 && l == -1)
        count = 0;
    else
        count = l - f + 1;
    cout << f << " " << l << " " << count << endl;
    return 0;
}
