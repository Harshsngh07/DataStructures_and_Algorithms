#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mapOfWords;

    mapOfWords.insert(make_pair("earth", 1));
    mapOfWords.insert(make_pair("moon", 2));
    mapOfWords["sun"] = 3;
    //will replace the value of already added key i.e earth
    mapOfWords["earth"] = 4;
    map<string, int>::iterator it = mapOfWords.begin();
    while (it != mapOfWords.end())
    {
        cout << it->first << " :: " << it->second << endl;
        it++;
    }

    if (mapOfWords.insert(make_pair("earth", 1)).second == false)
        cout << "Element no inserted because it already exists" << endl;

    if (mapOfWords.find("sun") == mapOfWords.end())
        cout << "word 'sun' found " << endl;

    if (mapOfWords.find("mars") == mapOfWords.end())
        cout << "word 'mars' not found" << endl;
}