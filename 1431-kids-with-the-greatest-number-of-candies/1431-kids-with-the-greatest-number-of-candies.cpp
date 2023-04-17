class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
 int n = candies.size();

    vector<bool> ans(n, false);
    int maxElement = *max_element(candies.begin(), candies.end());
    for (int i = 0; i < n; i++)
    {
        if (candies[i]+extraCandies >= maxElement)
        {
            ans[i] = true;
        }
    }
    return ans;
    }
};