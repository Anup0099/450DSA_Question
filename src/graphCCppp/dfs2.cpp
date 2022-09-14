#include <bits/stdc++.h> 
using namespace std;
void dfs(int node,vector<int>adj[],int vis[],vector<int>&ls){
    vis[node]=1;
    ls.push_back(node);
    //traverse all its neighbours
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
} 
vector<int>dfsOfGraph(int v,vector<int>adj[]){
    int vis[v]={0};
    vector<int>ls;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i,adj,vis,ls);
        }
    }
    return ls;
}
int main() {} 