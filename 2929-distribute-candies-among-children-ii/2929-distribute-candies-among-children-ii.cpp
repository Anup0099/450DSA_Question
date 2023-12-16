class Solution {
public:
    #define LL long long
    long long distributeCandies(int n, int limit) {
        long long ans = 0;
    for (int i = 0; i <= min(n, limit); i++)
    {
       int rem= n-i;
        if(rem>2*limit)continue;
        LL mx = min(rem,limit);
        rem = rem-mx;
        long long m=  mx-rem+1;
        ans += max(0LL,m);
    }
    return ans;
    }
};