#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<string> strings(5);

    for (int i = 0; i < 3; i++)
    {
        strings.push_back('one', i);
    }

    for (auto i = strings.begin(); i != strings.end(); i++)
    {
        cout << *i << " " << endl;
    }
}