bool isNumber(const string& str)
{
    for(char ch : str)
        if(!isdigit(ch))
            return false;
    return true;
}

vector<string> split(const string& str, char delim)
{
    auto i = 0;
    vector<string> list;
    
    auto pos = str.find(delim);
    
    while(pos != string::npos)
    {
        list.push_back(str.substr(i,pos-1));
        ++pos;
        pos = str.find(delim,pos);
    }
    
    list.push_back(str.substr(i,str.length()));
    
    return list;
}



int isValid(char *ip) {
    
    string s(ip);

    vector<string> list = split(s, ".");
    
    if(list.size()!=4)
        return 0;
        
    for(string s : list)
    {
        if(!isNumber(s) || stoi(s)>255 || stoi(s)<0 )
            return 0;
    }

    return 1;
}