/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fo(a,b) for(int i=a;i<b;i++)
#define vec vector<int>

typedef long long ll;

int main()
{
    FIO;
    string s;
    cin >> s;
    int n = s.length();
    transform(s.begin(),s.end(),s.begin(),::tolower);
    
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i] =='u')
               continue;
        else
            cout << "." << s[i];
           
    }
} /* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fo(a, b) for (int i = a; i < b; i++)
#define vec vector<int>

typedef long long ll;

int main()
{
    FIO;
    string s;
    cin >> s;
    int n = s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
            continue;
        else
            cout << "." << s[i];
    }
}