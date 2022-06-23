#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}//add edge from u to v and v to u  in adjacency list   //undirected graph  
void dfs(int s,int n,vector<vector<int>>&isConnected,vector<bool>&isVisited){
    isVisited[s]=true;  
    vector<int>adj;   
    for(int i=0;i<n;i++){
        int x = isConnected[s][i]; 
        if(x==1){
            adj.push_back(i);  
        }
    }
    for (auto x: adj)
    {
        if(!isVisited[x]){
            dfs(x,n,isConnected,isVisited);

        }
    }
    

}
int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool>isVisited(n,false); 
        int count=0; 
        for(int i=0;i<n;i++){
            if(!isVisited[i]){
                count++;  
                dfs(i,n,isConnected,isVisited);
            }
        }
        return count;
        

    }
int main(){
    int v=4;
vector<int>adj[v];
addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,1,2);
addEdge(adj,1,3);   //row 0 is connected to row 1 and row 2 and row 1 is connected to row 3 and row 2   
return 0;

}