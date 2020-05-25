#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int n,a,b;
    cin >> n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    
    int c = sqrt(a*a +b*b);
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] <= a || arr[i] <= b || arr[i] <= c )
            cout<<"DA"<<endl;
        else
            cout<<"NE"<<endl;
    }
    
}