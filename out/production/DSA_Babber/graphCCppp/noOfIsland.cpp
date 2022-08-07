#include <bits/stdc++.h> 
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void bfs(vector<int>adj[],int s,bool visited[]){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(auto v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
int bfsDis(vector<int>adj[],int v){
    bool visited[v+1];
    int count=0;
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
           bfs(adj,i,visited); 
           count++;
        }
    }
    return count;
} 
int main() {
    int v = 4;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    cout << bfsDis(adj, v) << endl;
    return 0;
} 