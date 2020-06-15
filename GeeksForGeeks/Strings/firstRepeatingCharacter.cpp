#include<bits/stdc++.h>
using namespace std;

char firstRepeatingCharacter(string &str)
{
        unordered_set<char> st;
	    for(int i=0;i<str.length();i++)
	    {
	        char c = str[i];
	        if(st.find(c)!=st.end())
	            return c;
	        else
	            st.insert(c);
	    }
	 return '\0';  
}

int main()
 {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    if((int)firstRepeatingCharacter(s)>0)
	        cout <<firstRepeatingCharacter(s)<<endl;
	    else
	        cout << -1 <<endl;
	}
	return 0;
}
