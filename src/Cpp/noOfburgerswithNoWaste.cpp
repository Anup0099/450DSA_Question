#include <bits/stdc++.h>
using namespace std;
// Given two integers tomatoSlices and cheeseSlices. The ingredients of different burgers are as follows:

// Jumbo Burger: 4 tomato slices and 1 cheese slice.
// Small Burger: 2 Tomato slices and 1 cheese slice.
// Return [total_jumbo, total_small] so that the number of remaining tomatoSlices equal to 0 and the number of remaining cheeseSlices equal to 0. If it is not possible to make the remaining tomatoSlices and cheeseSlices equal to 0 return [].

vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices)
{
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
int main() {}