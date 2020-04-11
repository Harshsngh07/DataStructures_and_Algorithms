#include <bits/stdc++.h>
using namespace std;

int main()
{
    int weight_Limak, weight_Bob, years = {0};
    cin >> weight_Limak >> weight_Bob;
    while (weight_Limak <= weight_Bob)
    {
        weight_Limak *= 3;
        weight_Bob *= 2;
        years++;
    }
    cout << years;
}