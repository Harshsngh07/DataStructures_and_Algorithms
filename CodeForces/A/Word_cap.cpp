#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word, temp;
    cin >> word;
    char first_char = toupper(word[0]);
    for (int i = 1; i < word.length(); i++)
        temp += word[i];
    cout << first_char << temp;
}