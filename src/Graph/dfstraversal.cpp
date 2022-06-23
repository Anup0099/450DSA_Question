#include <bits/stdc++.h>
using namespace std;

void dfs (int node,unordered_map<int,bool>&visited,unordered_map<int,list<int> >&adj,vector<int>&component){
    component.push_back(node);//    add the node to the component.to store ans in the vector
    visited[node]=true;//    mark the node as visited
    for(auto i:adj[node]){//    iterate through the adjacency list of the node
        if(!visited[i]){//    if the node is not visited then call dfs on the node
            dfs(i,visited,adj,component);
        }
    }
}


vector<vector<int>>depthFirstSearch(int v,int E,vector<vector<int>>&edges){
    unordered_map<int,list<int>>adj;//    create a map to store the adjacency list
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];//    get the first element of the edge
        int v = edges[i][1];//    get the second element of the edge
        adj[u].push_back(v);//    add the edge to the adjacency list
        adj[v].push_back(u);//    add the edge to the adjacency list
    }
    vector<vector<int>>ans;//    create a vector to store the components
    unordered_map<int,bool>visited;//    create a map to store the visited nodes
    for(int i=0;i<v;i++){//    iterate through the nodes
        if(!visited[i]){//    if the node is not visited then call dfs on the node
            vector<int>component;//    create a vector to store the component
            dfs(i,visited,adj,component);//    call dfs on the node
            ans.push_back(component);//    add the component to the vector
        }
    }
}

int main(){
    int v,E;
    cin>>v>>E;
    vector<vector<int>>edges(E);
    for(int i=0;i<E;i++){
        for(int j=0;j<2;j++){
            cin>>edges[i][j];
        }
    }
    vector<vector<int>>ans = depthFirstSearch(v,E,edges);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}