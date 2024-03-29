void reverse(char *begin, char *end)
{
    char temp;
    while (begin < end)
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void reverseWords(char *s)
{

    char *wordBegin = s;
    char *temp = s;

    while (*temp)
    {
        temp++;

        if (*temp == '\0')
            reverse(wordBegin, temp - 1);

        else if (*temp == '.')
        {
            reverse(wordBegin, temp - 1);
            wordBegin = temp + 1;
        }
    }

    reverse(s, temp - 1);

    cout << s;
}
