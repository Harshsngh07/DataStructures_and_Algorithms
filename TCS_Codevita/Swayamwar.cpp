//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string bride, groom;
    cin >> bride >> groom;

    //sort(s1.begin(),s1.end());
    //sort(s2.begin(),s2.end());
    //cout << s1 << " " << s2 << endl;
    for (int i = 0; i < n; i++)
    {
        char c = bride[i];
        size_t found = groom.find(c);
        if (found != string::npos)
        {
            groom.erase(groom.begin() + found);
        }
        else
            break;
    }

    cout << groom.length() << endl;
}