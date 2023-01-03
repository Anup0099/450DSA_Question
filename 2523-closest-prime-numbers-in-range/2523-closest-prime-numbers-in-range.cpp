class Solution {
public:
vector<bool> prime;
void sieve(int n)
{
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
}
vector<int> closestPrimes(int left, int right)
{
    prime.resize(right + 1, true);
    sieve(right);
    prime[0] = 0;
    prime[1] = 0;
    int prev = -1;
    int ans1 = INT_MAX;
    vector<int> rans(2,-1);
    for (int i = left; i <= right; i++)
    {
        if (prime[i] == true)
        {
            if (prev != -1)
            {
                if (i - prev < ans1)
                {
                    ans1 = i - prev;
                    rans[0] = prev;
                    rans[1] = i;
                }
            }
            prev = i;
        }
    }
    return rans;
    
}
};