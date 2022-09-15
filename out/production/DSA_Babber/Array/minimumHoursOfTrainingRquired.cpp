#include <bits/stdc++.h>
using namespace std;

int minNumberOfHours(int initialEnergy, int initialExperience, vector<int> &energy, vector<int> &experience)
{
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < energy.size(); i++)
    {
        sum += energy[i];
    }
    if (sum > initialEnergy)
    {
        ans += sum - initialEnergy + 1;
    }
    for (int i = 0; i < experience.size(); i++)
    {
        int exp = experience[i];
        if (exp >= initialExperience)
        {
            int diff = exp - initialExperience + 1;
            initialExperience += diff;
            ans += diff;
        }
        initialExperience += exp;
    }
    return ans;
}

int main()
{
}