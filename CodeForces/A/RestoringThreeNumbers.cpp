// A. Restoring Three Numbers
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Polycarp has guessed three positive integers a, b and c. He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order — their pairwise sums (three numbers) and sum of all three numbers (one number). So, there are four numbers on a board in random order: a+b, a+c, b+c and a+b+c.

// You have to guess three numbers a, b and c using given numbers. Print three guessed integers in any order.

// Pay attention that some given numbers a, b and c can be equal (it is also possible that a=b=c).

// Input
// The only line of the input contains four positive integers x1,x2,x3,x4 (2≤xi≤109) — numbers written on a board in random order. It is guaranteed that the answer exists for the given number x1,x2,x3,x4.

// Output
// Print such positive integers a, b and c that four numbers written on a board are values a+b, a+c, b+c and a+b+c written in some order. Print a, b and c in any order. If there are several answers, you can print any. It is guaranteed that the answer exists.

// Examples
// inputCopy
// 3 6 5 4
// outputCopy
// 2 1 3
// inputCopy
// 40 40 40 60
// outputCopy
// 20 20 20
// inputCopy
// 201 101 101 200
// outputCopy
// 1 100 100

#include <iostream>
#include <algorithm>
using namespace std;

// bool comp(int x, int y)
// {
//     return (x > y);
// }
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int largest(int a[])
{
    int max = a[0];
    for (int i = 1; i < 4; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    // int x = 0, y =0,z=0;
    int x = largest(arr);
    for (int i = 0; i < 1; i++)
    {
        cout << gcd(arr[i], arr[i + 1]) << " ";
        cout << gcd(arr[i + 2], arr[i + 0]) << " ";
        cout << gcd(arr[i + 1], arr[i + 3]) << " ";

        // cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
        // cout << "GCD of " << b << " and " << c << " is " << gcd(b, c) << endl;
        // cout << "GCD of " << c << " and " << d << " is " << gcd(c, d) << endl;
        // cout << "GCD of " << d << " and " << a << " is " << gcd(d, a) << endl;
        // cout << "GCD of " << a << " and " << c << " is " << gcd(a, c) << endl;
        // cout << "GCD of " << a << " and " << d << " is " << gcd(a, d) << endl;
    }
}