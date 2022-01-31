#include <bits/stdc++.h>
using namespace std;

int findFinalValue(vector<int> &nums, int original)
{
    int ans = 0;

    for (auto x : nums)
    {

        if (binary_search(nums.begin(), nums.end(), original))
        {
            ans = original * 2;
        }
    }
    
    return ans;
}
int main()
{
    vector<int>v={5,3,6,1,12};
    int original=3;
    cout<<findFinalValue(v,original);

}