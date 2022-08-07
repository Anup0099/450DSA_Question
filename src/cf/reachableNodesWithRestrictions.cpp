#include <bits/stdc++.h>
using namespace std;
// There is an undirected tree with n nodes labeled from 0 to n - 1 and n - 1 edges.

// You are given a 2D integer array edges of length n - 1 where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree. You are also given an integer array restricted which represents restricted nodes.

// Return the maximum number of nodes you can reach from node 0 without visiting a restricted node.

// Note that node 0 will not be a restricted node.
// int reachableNodes(int n, vector<vector<int>> &edges, vector<int> &restricted)
// {
// }
int longestIdealString(string s, int k)
{
    // sort(s.begin(), s.end());
    vector<int>v;
    for (int i = 0; i < s.length(); i++){
        if(s[i]-s[i+1]<=k){
                v.push_back(s[i]);
        }
    }
    for (int i = 0; i < s.length()-1; i++)
    {
        cout << v[i] << " ";
    }
    
    return v.size();
}
int main() {
    string s = "abcd";
    int k = 3;
    cout << longestIdealString(s, k);
    return 0;
}