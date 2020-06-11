//approach 1 O(N)
void calculateSpan(int price[], int n, int S[])
{
    // Your code here
    vector<int> v;
    stack<pair<int, int>> s;

    for (int i = 0; i < n; i++)
    {
        if (s.size() == 0)
            v.push_back(-1);
        else if (s.size() > 0 && s.top().first > price[i])
            v.push_back(s.top().second);
        else if (s.size() > 0 && s.top().first <= price[i])
        {
            while (s.size() > 0 && s.top().first <= price[i])
                s.pop();
            if (s.size() == 0)
                v.push_back(-1);
            else
                v.push_back(s.top().second);
        }

        s.push({price[i], i});

        for (int i = 0; i < v.size(); i++)
            S[i] = i - v[i];
    }
}

//approach 2 O(N)

void calculateSpan(int price[], int n, int S[])
{
    stack<int> s;
    s.push(0);

    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && price[s.top()] <= price[i])
            s.pop();

        S[i] = (s.empty()) ? (i + 1) : (i - s.top());

        s.push(i);
    }
}

//approach 3 O(N) without stack

void calculateSpan(int price[], int n, int S[])
{
    S[0] = 1;

    for (int i = 1; i < n; i++)
    {
        int counter = 1;
        while ((i - counter) >= 0 && price[i] >= price[i - counter])
            counter += S[i - counter];
        S[i] = counter;
    }
}
