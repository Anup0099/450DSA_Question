#include <bits/stdc++.h>
using namespace std;

bool canFinish(int n, vector<vector<int>> &prerequisites)
{//n is num of courses
        
        int edges = prerequisites.size();
        
        vector<int>adj[n];// adj list
        
        for(int i = 0;i<edges;i++){
            
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            
            adj[v].push_back(u);
        }
        
        // done creating adj list
        
         // USING KAHN's algo BFS if cycle is present
        // then its impossible to take all course
        
        vector<int>inDeg(n,0);// indegree array
        
        int count = 0;  // cycle detector
        
	   for(int i = 0;i<n;i++){
	       for(auto x : adj[i]){
	           inDeg[x]++;
	       }
       }
        // just do BFS
           
           queue<int>q;
           for(int i = 0;i<inDeg.size();i++){
               
               if(inDeg[i] == 0)
                    q.push(i);
           }
           
        while(!q.empty()){
            
            int node = q.front();
            // ans.push_back(node);
            q.pop();
            count++;
            
            for(auto x : adj[node]){
                
                inDeg[x] -= 1;
                if(inDeg[x] == 0){
                    q.push(x);
                }
            }
        }
        
           if(count == n)
               return true;
           
           
           return false;
}

int main()
{
    vector<vector<int>> prerequisites = {{1, 0}, {2, 6}, {1, 7}, {2, 8}, {3, 9}, {3, 2}, {4, 10}, {4, 5}};
    cout << canFinish(4, prerequisites) << endl;
    return 0;
}