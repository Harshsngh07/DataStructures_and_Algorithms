class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int most = *max_element(candies.begin(), candies.end());
        vector<bool> result;

        for (int i = 0; i < candies.size(); i++)
        {
            candies[i] += extraCandies;
            if (candies[i] >= most)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};