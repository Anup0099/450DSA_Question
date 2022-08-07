#include <bits/stdc++.h> 
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool DfsRec(vector<int>aadj[],int s,bool visited[],int parent){
    visited[s]=true;
    for(auto u:aadj[s]){
       if(DfsRec(aadj,u,visited,s)==true){
              return true;
       }else if(u!=parent){
           return false;
       }
    }
    return false;
}

bool dfs(vector<int>adj[],int v){
    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(DfsRec(adj,i,visited,-1)==true){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int v=6;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,4,5);
    addEdge(adj,5,4);
    cout<<dfs(adj,v);
    return 0;
} 