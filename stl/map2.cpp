//g++  5.4.0
// using map to iterate the  nos and keep the count of it
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    map<char, int> m;
    map<char, int> freq;

    map<char, int>::iterator itr;

    for (long i = 0; i < s.length(); i++)
        m[s[i]]++;

    cout << "Before" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (itr = m.begin(); itr != m.end(); itr++)
        {
            itr->second -= 1;
            cout << itr->first << " - " << itr->second << endl;
        }
    }

    int total(0);
    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        total += itr->second;
    }

    cout << total << endl;

    /* cout<<"After"<<endl;
          for(auto &e: m) 
            cout<<e.first<<" - "<<e.second<<endl; */
}
