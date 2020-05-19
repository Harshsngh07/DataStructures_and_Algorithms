//runtime error occurs

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        int ans;
        int size = stones.size();
        while (size > 1)
        {
            ans = 0;
            int minVal = *min_element(stones.begin(), stones.end());
            int maxVal = *max_element(stones.begin(), stones.end());
            int minI = min_element(stones.begin(), stones.end()) - stones.begin();
            int maxI = max_element(stones.begin(), stones.end()) - stones.begin();

            stones.erase(stones.begin() + minI);
            stones.erase(stones.begin() + maxI);

            if (maxVal > minVal)
                ans = maxVal - minVal;
            else
                ans = minVal - maxVal;

            stones.push_back(ans);
        }

        return (stones.empty()) ? 0 : stones.front();
    }
};



///correct solution

int lastStoneWeight(vector<int> &stones)
{
    priority_queue<int> pq(stones.begin(), stones.end());
    int val = INT_MAX, val2 = INT_MAX;
    while (pq.size() > 1)
    {
        val = pq.top();
        pq.pop();
        val2 = pq.top();
        pq.pop();
        if (val - val2 > 0)
            pq.push(val - val2);
    }
    return (pq.empty()) ? 0 : pq.top();
}