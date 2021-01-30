class Solution
{
public:
    int minimumDeviation(vector<int> &nums)
    {
        priority_queue<int> pq;
        int minV = INT_MAX;
        for (auto i : nums)
        {
            if (i % 2 == 0)
            {
                pq.push(i);
                minV = min(minV, i);
            }
            else
            {
                pq.push(i * 2);
                minV = min(minV, i * 2);
            }
        }

        int ans = INT_MAX;

        while (!pq.empty())
        {
            int curr = pq.top();
            pq.pop();
            ans = min(ans, curr - minV);

            if (curr % 2 != 0)
                break;

            pq.push(curr / 2);
            minV = min(minV, curr / 2);
        }

        return ans;
    }
};