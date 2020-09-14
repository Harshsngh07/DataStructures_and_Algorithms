long getMaxArea(long long arr[], int n)
{

    stack<long long> s;

    long max_area = 0;  // Initialize max area
    long tp;            // To store top of stack
    long area_with_top; // To store area with top bar
                        // as the smallest bar

    // Run through all bars of given histogram
    long i = 0;
    while (i < n)
    {
        // If this bar is higher than the bar on top
        // stack, push it to stack
        if (s.empty() || arr[s.top()] <= arr[i])
            s.push(i++);

        // If this bar is lower than top of stack,
        // then calculate area of rectangle with stack
        // top as the smallest (or minimum height) bar.
        // 'i' is 'right index' for the top and element
        // before top in stack is 'left index'
        else
        {
            tp = s.top(); // store the top index
            s.pop();      // pop the top

            // Calculate the area with hist[tp] stack
            // as smallest bar
            area_with_top = arr[tp] * (s.empty() ? i : i - s.top() - 1);

            // update max area, if needed
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }

    // Now pop the remaining bars    from stack and calculate
    // area with every popped bar as the smallest bar
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = arr[tp] * (s.empty() ? i : i - s.top() - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    return max_area;

} /// Aditya vermas solution
vector<long long> nsl(long long arr[], int n)
{
    vector<long long> left;

    stack<pair<long long, long long>> s;
    int pseudoIndex = -1;
    for (long long int i = 0; i < n; i++)
    {
        if (s.size() == 0)
            left.push_back(pseudoIndex);
        else if (s.size() > 0 && s.top().first < arr[i])
            left.push_back(s.top().second);
        else if (s.size() > 0 && s.top().first >= arr[i])
        {
            while (s.size() > 0 && s.top().first >= arr[i])
            {
                s.pop();
            }

            if (s.size() == 0)
                left.push_back(-1);
            else
                left.push_back(s.top().second);
        }

        s.push({arr[i], i});
    }

    return left;
}

vector<long long> nsr(long long arr[], int n)
{
    vector<long long> right;

    stack<pair<long long, long long>> s;
    int pseudoIndex = 7;
    for (long long int i = n - 1; i >= 0; i--)
    {
        if (s.size() == 0)
            right.push_back(pseudoIndex);
        else if (s.size() > 0 && s.top().first < arr[i])
            right.push_back(s.top().second);
        else if (s.size() > 0 && s.top().first >= arr[i])
        {
            while (s.size() > 0 && s.top().first >= arr[i])
            {
                s.pop();
            }

            if (s.size() == 0)
                right.push_back(-1);
            else
                right.push_back(s.top().second);
        }

        s.push({arr[i], i});
    }

    return right;
}

long getMaxArea(long long arr[], int n)
{

    // Your code here
    vector<long long> width;
    vector<long long> right;
    vector<long long> left;
    vector<long long> area;

    left = nsl(arr, n);
    right = nsr(arr, n);

    for (int i = 0; i < n; i++)
    {
        width[i] = right[i] - left[i] - 1;
    }

    for (int i = 0; i < n; i++)
    {
        area[i] = arr[i] * width[i];
    }

    long ans(INT_MIN);

    for (int i = 0; i < n; i++)
    {
        if (ans < area[i])
            ans = area[i];
    }

    return ans;
}