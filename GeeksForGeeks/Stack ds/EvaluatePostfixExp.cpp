int evaluatePostfix(string &str)
{

    stack<int> s;

    for (int i = 0; str[i]; i++)
    {
        if (isdigit(str[i]))
            s.push(str[i] - '0');
        else
        {
            int val1 = s.top();
            s.pop();

            int val2 = s.top();
            s.pop();

            switch (str[i])
            {
            case '+':
                s.push(val2 + val1);
                break;
            case '-':
                s.push(val2 - val1);
                break;
            case '*':
                s.push(val1 * val2);
                break;
            case '/':
                s.push(val2 / val1);
                break;
            }
        }
    }

    return s.top();
}