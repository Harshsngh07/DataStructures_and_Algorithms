queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    queue<ll> q1;
    stack<ll> s;
    ll x;
    while (!q.empty() && k > 0)
    {
        x = q.front();
        q.pop();
        s.push(x);
        --k;
    }

    while (!s.empty())
    {
        ll y = s.top();
        s.pop();
        q1.push(y);
    }

    while (!q.empty())
    {
        x = q.front();
        q.pop();
        q1.push(x);
    }

    return q1;
}