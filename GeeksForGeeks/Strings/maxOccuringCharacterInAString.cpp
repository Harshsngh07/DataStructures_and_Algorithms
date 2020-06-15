char getMaxOccuringChar(char* str)
{
    int freq[26] = {0};
    
    for(int i=0;i<strlen(str);i++)
       freq[str[i]-'a']++;
        
    int max = INT_MIN;    
    char result;
    for(int i=0;i<26;i++)
    {
        if(max<freq[i])
        {
            max = freq[i];
            result = (char)(i+'a');
        }
    }
    return result;
}