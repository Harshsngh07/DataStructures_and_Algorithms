#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MOD 1000000007
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void deleteMid(stack<char> &s, int n, int curr = 0)
{
    if (s.empty() || curr == n)
        return;

    int x = s.top();
    s.pop();

    deleteMid(s, n, curr + 1);

    if (curr != n / 2)
        s.push(x);
}

int main()
{

    stack<char> s;
    s.push('1');
    s.push('2');
    s.push('3');
    s.push('4');
    s.push('5');
    s.push('6');
    s.push('7');
    s.push('8');

    deleteMid(s, s.size());

    while (!s.empty())
    {
        char x = s.top();
        s.pop();
        cout << x << " ";
    }

    return 0;
}