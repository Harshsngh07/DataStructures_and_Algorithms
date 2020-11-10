class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int cnt = 0, tmp_cnt = 1; //head is 0
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0)
                tmp_cnt++;
            else
            {
                cnt += (tmp_cnt - 1) / 2;
                tmp_cnt = 0;
            }
        }
        cnt += tmp_cnt / 2; //tail is 0
        return cnt >= n;
    }
};