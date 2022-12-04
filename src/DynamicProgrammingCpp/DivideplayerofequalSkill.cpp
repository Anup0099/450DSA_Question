#include <bits/stdc++.h>
using namespace std;
// You are given a positive integer array skill of even length n where skill[i] denotes the skill of the ith player. Divide the players into n / 2 teams of size 2 such that the total skill of each team is equal.

// The chemistry of a team is equal to the product of the skills of the players on that team.

// Return the sum of the chemistry of all the teams, or return -1 if there is no way to divide the players into teams such that the total skill of each team is equal.

long long dividePlayers(vector<int> &skill)
{
    int n = skill.size();
    sort(skill.begin(), skill.end());
    long long ans = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if(skill[i]+skill[n-i-1] != skill[0]+skill[n-1])
            return -1;

        ans += (long long)skill[i] * skill[n - i - 1];
    }
    return ans;

}

int main() {}