// Introduction to STL

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> A = {5, 12, 3, 72};

    sort(A.begin(), A.end());

    bool present = binary_search(A.begin(), A.end(), 3); //true or 1
    // we use boolalpha to print true or false otherwise it just returns the integral values i.e 0 and 1.
    cout << boolalpha << present;
}