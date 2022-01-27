 int dp[n+1]={0};
    //base case assingment
    dp[0]=0;
    dp[1]=1;
    for (int i = 2; i <=n; i++)
    {
        /* code */
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
    