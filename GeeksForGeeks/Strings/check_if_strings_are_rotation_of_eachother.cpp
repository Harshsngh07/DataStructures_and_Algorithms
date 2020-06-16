bool areRotations(string s1,string s2)
{
    if(s1.length()!=s2.length()) return 0;
    
    string temp = s1+s1;

    if(temp.find(s2)!=string::npos)
        return 1;
    return 0;
}
