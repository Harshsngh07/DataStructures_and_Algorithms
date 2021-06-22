class Solution {
public:
    static bool compare(string a,string b,string order)
{
    int i=0;
    while(i<a.size() && a[i]==b[i])
        i++;
    if(a.size()==i) 
        return 1;
    else if(b.size()==i)
        return 0;
    else
        return order.find(a[i])<order.find(b[i]);
}
bool isAlienSorted(vector<string>& words, string order) {
    
    int i;
    for(i=0;i<words.size()-1;i++)
    {
        if(!compare(words[i],words[i+1],order)) return 0;
    }
    return 1;
    
}
};
