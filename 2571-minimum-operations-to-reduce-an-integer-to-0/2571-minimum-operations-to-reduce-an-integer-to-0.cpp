class Solution {
public:
    int minOperations(int n) {
        long long  ans = 0,i,j;
    // convert it into binary first
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            // matlab least signifiant bit zero hai
            ans++;
            n = n / 2;
            if (n & 1 == 1)
            {
                n++;
            }
        }
        else
        {
            n = n / 2;
        }
    }
    return ans;
    }
};