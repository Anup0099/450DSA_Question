#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;
long long smallestNumber(long long num)
{
   string nums = to_string(num);
   sort(nums.begin(),nums.end());

}
int bitwiseComplement(int n)
{
    int m = n;
    int mask = 0;
    if (n == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}

bool isPowerOfTwo(int n)
{
    int ans = 0;
    for (size_t i = 0; i < 30; i++)
    {
        /* code */
        ans = pow(2, i);

        if (ans == n)
        {
            return 1;
        }
        
    }
    return 0;
}
vector<int> sortEvenOdd(vector<int> &nums)
{
    vector<int> odd, even;
    int n = nums.size();
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        if (nums[i] % 2 == 0)
        {
            even.push_back(nums[i]);
        }
        else
        {
            odd.push_back(nums[i]);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<>());
    int i = 0;
    int eveni = 0, oddj = 0;
    while (eveni < even.size() || oddj < odd.size())
    {
        if (eveni < even.size())
        {
            nums[i] = even[eveni];
            eveni++;
            i++;
        }
        if (oddj < odd.size())
        {
            nums[i] = odd[oddj];
            oddj++;
            i++;
        }
    }
    return nums;
}
int main()
{
    cout << isPowerOfTwo(8);
}