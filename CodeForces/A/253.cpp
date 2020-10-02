#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>

#include <fstream>
#include <iostream>
using namespace std;
typedef pair<int,int> p;
#define mp make_pair

ifstream fin ("input.txt");
ofstream fout ("output.txt"); //fin fout

int a,b,i,la,lb;
bool start;

int main()
{
  /*freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);// scanf puts*/
  fin>>a>>b;
  if(a >= b)
    {
      start = 1;
      for(i=0;i<2*b;i++)
       {
         if(start)
           fout<<'B';
         else
           fout<<'G';
         start = !start;
       }
      for(i=2*b;i<a+b;i++)
        fout<<'B';
      fout<<endl;
    }
  else{
    start = 0;
      for(i=0;i<2*a;i++)
       {
         if(start)
           fout<<'B';
         else
           fout<<'G';
         start = !start;
       }
      for(i=2*a;i<a+b;i++)
        fout<<'G';
      fout<<endl;}


  return 0;
}