#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> &nums)
{
    int sum1 = 0, sum2 = 0;
    int n = nums.size();
    for (int i = 1; i <= n - 2; i++)
    {

        sum1 += nums[i];
    }
    for (int i = n - 2; i < n; i++)
    {
        if (nums[0] == 10)
        {
            sum2 += nums[i] * 2;
        }
        else
        {
            sum2 += nums[i];
        }
    }

    return sum1 + sum2;
}
int isWinner(vector<int> &player1, vector<int> &player2)
{
    int score1 = player1[0], score2 = player2[0];
    for (int i = 0; i < player1.size(); i++)
    {
        if (i >= 2 || player1[i - 2] == 10 || player1[i - 1] == 10)
        {
            score1 += player1[i] * 2;
        }
        else if (i >= 1 && player1[i - 1] == 10)
        {
            score1 += player1[i] * 2;
        }
        else
        {
            score1 += player1[i];
        }
    }
    for (int i = 0; i < player2.size(); i++)
    {
        if (i >= 2 || player2[i - 2] == 10 || player2[i - 1] == 10)
        {
            score2 += player2[i] * 2;
        }
        else if (i >= 1 && player2[i - 1] == 10)
        {
            score2 += player2[i] * 2;
        }
        else
        {
            score2 += player2[i];
        }
    }
    if (score1 > score2)
    {
        return 1;
    }
    else if (score1 < score2)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> player1 = {9, 8, 5, 3, 7};
    vector<int> player2 = {8, 7, 4, 9, 0};
    cout << isWinner(player1, player2);
}