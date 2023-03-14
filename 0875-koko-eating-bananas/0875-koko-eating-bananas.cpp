class Solution {
public:
  bool canEatAllBananas(vector<int> &piles, int mid, int h)
{
    int actualtime = 0;
    for (auto x : piles)
    {
       
        if (x % mid == 0)
        {
            actualtime += x / mid;
        }
        else
        {
            actualtime += x / mid + 1;
        }
    }
    return actualtime <= h;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int mid = 0;
    int r = *max_element(piles.begin(), piles.end());
    int l = 1;
    while (l < r)
    {
        mid = l + (r - l) / 2;

        if (canEatAllBananas(piles, mid, h))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}
};