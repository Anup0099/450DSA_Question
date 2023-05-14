class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int score1 = player1[0], score2 = player2[0];
    for (int i = 1; i < player1.size(); i++)
    {
        if (i >= 2 && player1[i - 2] == 10 || player1[i - 1] == 10)
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
    for (int i = 1; i < player2.size(); i++)
    {
        if (i >= 2 && player2[i - 2] == 10 || player2[i - 1] == 10)
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
};