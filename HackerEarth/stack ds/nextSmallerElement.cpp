#include <bits/stdc++.h>
using namespace std;

void nextSmallerElement(int arr[], int n)
{
    vector<int> v;

    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        if (s.size() == 0)
            v.push_back(-1);
        else if (s.size() > 0 && s.top() < arr[i])
            v.push_back(s.top());
        else if (s.size() > 0 && s.top() >= arr[i])
        {
            while (s.size() > 0 && s.top() >= arr[i])
                s.pop();

            if (s.size() == 0)
                v.push_back(-1);
            else
                v.push_back(s.top());
        }

        s.push(arr[i]);
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    nextSmallerElement(a, n);
    cout << endl;
}