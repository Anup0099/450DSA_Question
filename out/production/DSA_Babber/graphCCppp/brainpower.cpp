#include <bits/stdc++.h>
using namespace std;
long long recursion(int ind, vector<vector<int>> &questions)
{
    if (ind == questions.size())
    {
        return 0;
    }
    long long ans = 0;
    for (int i = 0; i < questions[ind].size(); i++)
    {
        ans = max(ans, questions[ind][i] + recursion(ind + 1, questions));
    }
    return ans;
}
long long mostPoints(vector<vector<int>> &questions)
{
    int i = 0;
    int n = questions.size();
    long long ans = 0;
    while (i < n)
    {
        long long sum = 0;
        for (int j = 0; j < questions[i].size(); j++)
        {
            sum += questions[i][j];
        }
        ans = max(ans, sum);
        i++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}