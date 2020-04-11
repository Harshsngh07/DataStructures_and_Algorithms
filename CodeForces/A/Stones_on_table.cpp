

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char stones[n];
 
    for(int i=0;i<n;i++)
        cin>>stones[i];

    int count = 0;
    int temp = stones[0];
    for(int i=0;i<n;i++)
    {
       if (temp == stones[i+1])
           count++;
       temp = stones[i+1];
    }
   cout <<count;
}




