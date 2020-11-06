//g++  7.4.0

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int temp(0);
    temp = z / 10;
    int ans1(0), ans2(0);

    if (x > y)
    {
        ans1 = temp / x;
        temp -= ans1 * x;
    }
    else
    {
        ans2 = temp / y;
        temp -= ans2 * y;
    }
    if (ans1 > 4)
    {
        int a = ans1 - 4;
        ans1 = 4;
        temp += a * x;
    }

    if (temp != 0)
    {
        if (temp % x == 0 && ans1 < 4)
            ans1 = temp / x;
        else
            ans2 = temp / y;
    }

    cout << ans1 << "\n"
         << ans2 << endl;
}