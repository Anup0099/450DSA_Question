#include <bits/stdc++.h>
using namespace std;
unordered_set<int> getPrimeFactors(int num)
{
    unordered_set<int> primeFactors;
    while (num % 2 == 0)
    {
        primeFactors.insert(2);
        num /= 2;
    }
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            primeFactors.insert(i);
            num /= i;
        }
    }
    if (num > 2)
    {
        primeFactors.insert(num);
    }
    return primeFactors;
}
int distinctPrimeFactors(vector<int> &nums)
{
    unordered_set<int> primeFactors;
    for (auto num : nums)
    {
        unordered_set<int> current = getPrimeFactors(num);
        primeFactors.insert(current.begin(), current.end());
    }
    return primeFactors.size();
}

int main()
{
    v
        vector<int>
            nums = {2, 4, 8, 16};
    cout << distinctPrimeFactors(nums);
}