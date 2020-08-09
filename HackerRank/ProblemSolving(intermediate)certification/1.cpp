//Ques - Marketing Strategy

#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'minimumSwaps' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING status as parameter.
 */

int minimumSwaps(string status) {
    string s="", s1="";
    char a = status[0];


    for (int i=0;i<status.length();i++)
    {
        if (i%2==0)
            s+='S';
        else
            s+='R';
    }

    for (int i=0;i<status.length();i++)
    {
        if (i%2==0)
            s1+='R';
        else
            s1+='S';
    }


    int count1(0), count2(0);
    for (int i=0;i<status.length();i++)
    {
        if (status[i]!=s[i])
            count1++;
        if (status[i]!=s1[i])
            count2++;
    }
    return min(count1, count2);


}
