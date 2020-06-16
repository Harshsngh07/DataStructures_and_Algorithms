string missingPanagram(string str){

 //Your code here
    string s="";
    bool a[26]={false};
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
            a[str[i]-'a'] = true;
        else if (str[i]>='A' && str[i]<='Z')
            a[str[i]-'A'] = true;
    }
        
    for(int i=0;i<26;i++)
    {
        if(a[i]==false)
            s.push_back((char)(i+'a'));
    }
    
    return s;
}
