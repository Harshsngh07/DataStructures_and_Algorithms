#include <bits/stdc++.h>
using namespace std;

int getChocolateCost(vector<int> arr, int chocolateMrp)
{
    long int curchococlate = 0, chocolate2buy = arr[0];
    for(int i=1; i<arr.size(); i++)
    {
        int tmp = (arr[i-1]-arr[i]);
        if(tmp>-1)curchococlate+=tmp;
        else
        {
            curchococlate+=tmp;
            if(curchococlate<0)
            {
                chocolate2buy+=(curchococlate*-1);
                curchococlate=0;
            }
        }
        // cout<<tmp<<" "<<curchococlate<<' '<<chocolate2buy<<"\n";
    }
    return chocolate2buy*chocolateMrp;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp;
	    cin>>n;
	    vector<int> arr;
	    while(n--)
	    {
	        cin>>tmp;
	        arr.push_back(tmp);
	    }
	    cin>>tmp;
	    cout<<getChocolateCost(arr, tmp)<<"\n";
	}
	return 0;
}