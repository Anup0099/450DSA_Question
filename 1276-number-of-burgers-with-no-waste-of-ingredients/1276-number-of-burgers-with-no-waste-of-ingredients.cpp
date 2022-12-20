class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> ans;
    int x = tomatoSlices - 2 * cheeseSlices;
    int y = 4 * cheeseSlices - tomatoSlices;
    if (x >= 0 && y >= 0 && x % 2 == 0 && y % 2 == 0)
    {
        ans.push_back(x / 2);
        ans.push_back(y / 2);
    }
    return ans;
    }
};