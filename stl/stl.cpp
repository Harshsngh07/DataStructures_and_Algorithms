// Introduction to STL

#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool f(int x, int y)
{
    return x > y;
}

int main()
{
    vector<int> A = {5, 12, 3, 72};

    sort(A.begin(), A.end()); //{3,5,12,72}

    bool present = binary_search(A.begin(), A.end(), 3); //true or 1
    // we use boolalpha to print true or false otherwise it just returns the integral values i.e 0 and 1.
    present = binary_search(A.begin(), A.end(), 4); //false

    A.push_back(100); // {3,5,12,72,100}

    present = binary_search(A.begin(), A.end(), 100); //true

    A.push_back(100); // {3,5,12,72,100,100}
    A.push_back(100); // {3,5,12,72,100,100,100}
    A.push_back(100); // {3,5,12,72,100,100,100,100}
    A.push_back(100); // {3,5,12,72,100,100,100,100,100}
    A.push_back(120); // {3,5,12,72,100,100,100,100,100}

    auto it = lower_bound(A.begin(), A.end(), 100);  // >=
    auto it2 = upper_bound(A.begin(), A.end(), 100); // >
    // cout << *it << " " << *it2 << endl;
    // cout << it2 - it << endl;

    //sorting the vectors in descending order for that we need to pass a comparator in sort function
    sort(A.begin(), A.end(), f);
    // vector<int>::iterator it3;

    for (int x : A)
    {
        cout << x << " ";
    }
}