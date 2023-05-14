#include <bits/stdc++.h>
define ll long long
define ld long double
define pb push_back
using namespace std;
int numberOfRescueBoats(vector<int> &people, int limit)
{
    sort(people.begin(), people.end());
    int i = 0, j = people.size() - 1, ans = 0;
    while (i <= j)
    {
        if (people[i] + people[j] <= limit)
            i++;
        j--;
        ans++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}