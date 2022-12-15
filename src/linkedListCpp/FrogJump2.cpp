#include <bits/stdc++.h>
using namespace std;
//  You are given a 0-indexed integer array stones sorted in strictly increasing order representing the positions of stones in a river.

// A frog, initially on the first stone, wants to travel to the last stone and then return to the first stone. However, it can jump to any stone at most once.

// The length of a jump is the absolute difference between the position of the stone the frog is currently on and the position of the stone to which the frog jumps.

// More formally, if the frog is at stones[i] and is jumping to stones[j], the length of the jump is |stones[i] - stones[j]|.
// The cost of a path is the maximum length of a jump among all jumps in the path.

// Return the minimum cost of a path for the frog.
int solve(int ind,vector<int> &stones)
{
    int n=stones.size();
    if(ind==n-1)
        return 0;
    int ans=INT_MAX;
    for(int i=ind+1;i<n;i++)
    {
        if(stones[i]-stones[ind]<=stones[ind]-stones[ind-1])
            ans=min(ans,solve(i,stones));
    }
    return ans;
   
}

int maxJump(vector<int> &stones)
{
    int n=stones.size();
    int ans=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(stones[i]-stones[0]<=stones[1]-stones[0])
            ans=min(ans,solve(i,stones));
    }
    return ans;
    
}


int main() {}