class Solution
{
    public:
       
    // int solve(string word1, string word2, int i, int j, vector<vector < int>> dp)
    // {
    //     if (i >= n and j >= m)
    //         return 0;
    //     if (i >= n)
    //         return m - j;
    //     if (j >= m)
    //         return n - i;
    //     if (dp[i][j] != -1)
    //         return dp[i][j];
    //     if (word1[i] == word2[j])
    //     {
    //         return dp[i][j] = solve(word1, word2, i + 1, j + 1, dp);
    //     }
    //     else
    //     {
    //         int op1 = 1 + solve(word1, word2, i + 1, j, dp);
    //         int op2 = 1 + solve(word1, word2, i, j + 1, dp);
    //         return dp[i][j] = min(op1, op2);
    //     }
    // }
//     int lcs(string s1,string s2) 
//     { 
//         int m=s1.length(); 
//         int n=s2.length(); 
//         int dp[m+1][n+1]; 
        
//         for(int i=0;i<=m;i++) 
//         { 
//             for(int j=0;j<=n;j++) 
//             {   if(i==0||j==0)

//             {
//                 dp[i][j]=0;
//             }
//               else  if(s1[i-1]==s2[j-1]) 
//                 { 
//                     dp[i][j]=1+dp[i-1][j-1]; 
//                 } 
//                 else 
//                 { 
//                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]); 
//                 } 
//             } 
//         } 
//         return dp[m][n]; 
//     } 
    int lcs(string word1,string word2)
    {
        
        int n=word1.length(),m=word2.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }else if(word1[i-1]==word2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return dp[n][m];
        
    }
    int minDistance(string word1, string word2)
    {
       	//given two strings word1 and word2 return the minimum number of steps required to make word1 and word2 the same in one operation you can delete exactly one character tahole  index e convert kore ne express in terms of index do operation on that index 
//        longest commmon substring ber koro firste
       
     int a=lcs(word1,word2);
        int m=word1.size();
        int n=word2.size();
     
       
        int dels=(m-a)+(n-a);
        return dels;
        
    }
};