#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int diagonalPrime(vector<vector<int>> &nums)
{
    int n = nums.size();

    int ans = 0;
    // traverse in diagonal
    for (int i = 0; i < n; i++)
    {
        if ( isPrime(nums[i][i]))
        {
            ans = max(ans, nums[i][i]);
        }
        if ( nums[i][n - i - 1])
        {
            ans = max(ans, nums[i][n - i - 1]);
        }
    }
    return ans;
}
int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> nums(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> nums[i][j];
        }
    }
    int ans = diagonalPrime(nums);
    cout << ans;
}