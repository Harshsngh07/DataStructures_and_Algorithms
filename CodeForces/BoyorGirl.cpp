#include <bits/stdc++.h>
using namespace std;

int main()
{
    string user_name;
    cin >> user_name;
    int count = 0;
    for (int i = 0; i < user_name.length(); i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
            if (user_name[i] == user_name[j])
                break;
        if (i == j)
            count++;
    }
    if (count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}