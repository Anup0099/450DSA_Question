#include <bits/stdc++.h>
using namespace std;
void printPath(int parent[], int j)
{
    if (parent[j] == -1)
        return;
    printPath(parent, parent[j]);
    printf("%d ", j);
} 

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n,vector<int>(n,0));
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u][v]=w;
        graph[v][u]=w;
    }
    int s,d;
    cin>>s>>d;
    vector<int> dist(n,INT_MAX);
    dist[s]=0;
    vector<bool> visited(n,false);
    visited[s]=true;
    for(int i=0;i<n;i++){
        int u=-1;
        for(int j=0;j<n;j++){
            if(!visited[j] && (u==-1 || dist[j]<dist[u])){
                u=j;
            }
        }
        if(u==-1){
            break;
        }
        visited[u]=true;
        for(int j=0;j<n;j++){
            if(graph[u][j]!=0 && dist[j]>dist[u]+graph[u][j]){
                dist[j]=dist[u]+graph[u][j];
            }
        }
    }
    cout<<dist[d]<<endl;
    return 0;
}