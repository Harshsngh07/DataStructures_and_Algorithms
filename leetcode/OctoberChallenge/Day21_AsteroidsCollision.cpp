class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> s;
        for (int ast : asteroids)
        {
            bool flag = true;
            while (!s.empty() && ast < 0 && s.top() > 0)
            {
                if (abs(ast) > s.top())
                {
                    s.pop();
                }
                else if (abs(ast) < s.top())
                {
                    flag = false;
                    break;
                }
                else
                {
                    flag = false;
                    s.pop();
                    break;
                }
            }

            if (flag)
                s.push(ast);
        }

        asteroids.clear();
        while (!s.empty())
        {
            int x = s.top();
            asteroids.push_back(x);
            s.pop();
        }

        reverse(asteroids.begin(), asteroids.end());

        return asteroids;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();