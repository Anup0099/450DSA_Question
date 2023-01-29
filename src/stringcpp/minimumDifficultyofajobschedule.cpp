#include <bits/stdc++.h>
using namespace std;
int t[301][11];
    int solve(vector<int>& jd, int n, int idx, int d) {
        
        //if you have only 1 day, then you will all the remaining jobs
        //and select the max difficulty as the answer
        if(d == 1) {
            return *max_element(begin(jd)+idx, end(jd));
        }
        
        if(t[idx][d] != -1)
            return t[idx][d];
    
        
        int Max = INT_MIN;
        int result = INT_MAX;
        
        //Try one by one with all possibility
        /*
            Take 1 job in one day
            Take 2 jobs in one day
            Take 3 jobs in one day
            and so on
            
            Then find the optimal one among all the results
        */
        for(int i = idx; i<=n-d; i++) {
            Max = max(Max, jd[i]);
            
            result = min(result, Max + solve(jd, n, i+1, d-1));
        }
        
        return t[idx][d] = result;
    }
int minDifficulty(vector<int> &jobDifficulty, int d)
{
    int n=jobDifficulty.size();
    if(d>n)return -1;
    return solve(jobDifficulty,n,0);

}
int main() {}