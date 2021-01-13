class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        int n = people.size();
        int count(0);
        int left(0), right(n - 1);

        sort(people.begin(), people.end());

        while (left <= right)
        {
            int x = people[left] + people[right];
            if (x <= limit)
                left++;
            right--;
            count++;
        }

        return count;
    }
};