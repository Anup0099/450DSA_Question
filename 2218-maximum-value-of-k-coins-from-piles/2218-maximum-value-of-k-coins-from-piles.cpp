class Solution {
public:
int t[1001][2001];
int n, m;
int solve(vector<vector<int>> &piles, int i, int k)
{
    int sum = 0;
    if(i>=n){
        return 0;
    }
    if(t[i][k]!=-1){
        return t[i][k];
    }
    int nottaken = solve(piles, i+1, k);
    int taken = 0;
    for(int j=0;j<min((int)piles[i].size(),k);j++){
        sum += piles[i][j];
        taken= max(taken, sum + solve(piles, i+1, k-(j+1)));
    }
    return t[i][k] = max(taken, nottaken);
}
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
    n = piles.size();
    m = piles[0].size();
    memset(t, -1, sizeof(t));
    return solve(piles, 0,  k);
    }
};