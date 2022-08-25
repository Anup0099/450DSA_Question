#include <bits/stdc++.h>
using namespace std;
// You are given a binary string s. In one second, all occurrences of "01" are simultaneously replaced with "10". This process repeats until no occurrences of "01" exist.

// Return the number of seconds needed to complete this process.
int minimumColor(string blocks, int k)
{
    int back = 0, front = 0, count_w = 0, ans = INT_MAX;
    while (front < blocks.size())
    {
        if (blocks[front] == 'W')
        {
            count_w++;
        }
        if (front - back + 1 == k)
        {
            ans = min(ans, count_w);
            if (blocks[back] == 'W')
                count_w--;
            back++;
        }
        front++;
    }
    return ans;
}
int main()
{
    string s = "11100";
}