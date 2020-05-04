#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    map<string, int> student;
    map<string ,int> ::iterator it;
    long int q;
    cin >> q;
    int type = 0;
    string x;
    int y;
    while(q--)
    {
        cin >> type;
        if(type == 1)
        {
            cin >> x>>y;
            student[x] += y;

        }
        else if(type == 2) 
        {
            cin >> x;
            student.erase(x);
        }
        else
        {
            cin >> x;
            it = student.find(x);
            if(it != student.end())
                cout<<it->second<<endl;
            else
                cout<<0<<endl;
        }
    }
    return 0;
}



