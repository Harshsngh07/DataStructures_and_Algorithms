#include<bits/stdc++.h>
using namespace std;
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
    	cin >> a >> b;
    
    	long long prod(1);
    	if(a>b) cout << 0 <<endl;
        else
        {
            for(int i=1;i<=a;i++)
                prod = (prod* i)%b;

            cout << prod << endl;    
        }
    	
    }
    
    return 0;
}