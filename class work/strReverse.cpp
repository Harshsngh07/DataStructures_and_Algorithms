#include <iostream>
#include <string.h>

using namespace std;

void Reverse(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}

int main()
{

    string str;
    cin >> str;
    Reverse(str);
}