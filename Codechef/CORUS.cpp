#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int t;
  cin >> t;
  while (t--)
  {
    long long int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    map<char, int> m;
    map<char, int>::iterator it;

    int total(0);
    int a[q];
    for (int i = 0; i < q; i++)
    {
      long long int x;
      cin >> x;

      for (int i = 0; i < s.length(); i++)
        m[s[i]]++;

      while (x--)
      {

        for (it = m.begin(); it != m.end(); ++it)
          it->second -= 1;

        for (it = m.begin(); it != m.end(); ++it)
          if (it->second == 0)
            m.erase(it);
      }

      for (it = m.begin(); it != m.end(); ++it)
        total += it->second;

      /*if(total<0)
                    cout<<0<<endl;
                else
                    cout<<total<<endl;*/
      cout << total << endl;

      /*for(it=m.begin();it!=m.end();++it)
                cout<<it->first << " " <<it->second<<endl;*/
    }

    //cout<<fabs(total)<<endl;
  }
}