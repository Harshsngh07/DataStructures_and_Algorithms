//important ques

unordered_map<int, int> m;

bool sortByVal(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

vector<int> sortByFreq(int arr[], int n)
{
    vector<pair<int, int>> v;
    vector<int> ans;

    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    copy(m.begin(), m.end(), back_inserter(v));

    sort(v.begin(), v.end(), sortByVal);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].second; j++)
        {
            ans.push_back(v[i].first);
        }
    }
    m.clear();
    return ans;
}

///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool compare(const pair<int, int> a, const pair<int, int> b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

void solve(int a[], int n)
{
    unordered_map<int, int> m;
    for(int i=0;i<n;i++)
        m[a[i]]++;
    vector<pair<int, int>> v(m.begin(), m.end());

    sort(v.begin(), v.end(), compare);
    for(auto i: v)
    {
        while(i.second--)
            cout << i.first << " ";
    }
}

int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n];
	    for(ll i=0;i<n;i++) cin >> a[i];
	    solve(a,n);
	    cout << endl;
	}
	return 0;
}