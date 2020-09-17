#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printMedians(int a[], int n)
{
    // max heap to store the smaller half elements 
    priority_queue<int> s; 
  
    // min heap to store the greater half elements 
    priority_queue<int,vector<int>,greater<int> > g; 
    
    int med = a[0]; 
    s.push(a[0]); 
  
    cout << med << endl; 
    
    for(int i=1;i<n;i++)
    {
        int x = a[i];
        if(s.size()>g.size())
        {
            if(x < med)
            {
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else
                g.push(x);
            
            med = (s.top()+g.top())/2;
        }
        else if (s.size()==g.size())
        {
            if(x<med)
            {
                s.push(x);
                med = s.top();
            }
            else
            {
                g.push(x);
                med = g.top();
            }
        }
        else
        {
            if(x>med)
            {
                s.push(g.top());
                g.pop();
                g.push(x);
            }
            else
                s.push(x);
            
            med = (s.top()+g.top())/2;
            
        }
        
        cout << med << endl;
    }
}

int main()
 {
	int n;
	cin >> n;
	int a[n];
	int i=0;
	while(i<n)
	{
	   int x;
	   cin >> x;
	   a[i]= x;
	   i++;
	}
	
	printMedians(a,n); 
	return 0;
}