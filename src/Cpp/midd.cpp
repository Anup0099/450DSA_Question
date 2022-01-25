#include <bits/stdc++.h>
using namespace std;
bool che(vector<int> &bananas, int mid_val, int H)
{
    int time = 0;
    for (size_t i = 0; i < bananas.size(); i++)
    {
        /* code */
        if (bananas[i] % mid_val != 0)
        {
            time += ((bananas[i] / mid_val) + 1);
        }
        else
        {
            time += (bananas[i] / mid_val);
        }
    }
    if (time <= H)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int minEatingSped(vector<int> &piles, int H)
{
    int start = 1;
    int end = *max_element(piles.begin(), piles.end());
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if ((che(piles, mid, H)) == true)
        {
            end = mid;
        }else{
            start= mid+1;
        }
    }
}
int main()
{
    vector<int>piles ={}
}