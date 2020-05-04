#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<long long > s;
    set<long long >::iterator it;
    long int  q;
    int y;
    long long int x;
    cin >> q;
    while(q--)
    {
        cin >> y >> x;
        if(y==1)
            s.insert(x);
        else if (y == 2)
            s.erase(x);
        else
        {
            it = s.find(x);
            if(it == s.end())
                cout << "No"<<endl;
            else
                cout << "Yes" << endl;
        }

    }
    return 0;
}



