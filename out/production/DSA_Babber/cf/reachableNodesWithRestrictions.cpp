#include <bits/stdc++.h>
using namespace std;
// There is an undirected tree with n nodes labeled from 0 to n - 1 and n - 1 edges.

// You are given a 2D integer array edges of length n - 1 where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree. You are also given an integer array restricted which represents restricted nodes.

// Return the maximum number of nodes you can reach from node 0 without visiting a restricted node.

// Note that node 0 will not be a restricted node.
// int reachableNodes(int n, vector<vector<int>> &edges, vector<int> &restricted)
// {
// }
int cnt = 0;
void dfd(int curr,vector<vector<int>> &adj,vector<int>&vis){
    vis[curr]=1;
    cnt++;
    for(auto node:adj[curr]){
        if(vis[node]==0){
            dfd(node,adj,vis);
        }
    }
    return;
}
int reachableNodes(int n, vector<vector<int>> &edges, vector<int> &restricted)
{
    vector<int>vis(n,0);
    for(int i=0;i<restricted.size();i++){
        vis[restricted[i]]++;
    }
    vector<vector<int>>adj(n);
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    dfd(0,adj,vis);
    return cnt;

}
int main() {
    
}