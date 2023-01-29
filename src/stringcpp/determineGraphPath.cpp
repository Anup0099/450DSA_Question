#include <bits/stdc++.h> 
using namespace std;
// You are given a simple undirected graph with 
// N vertices and 
// M edges. The vertices are numbered 
// 1,2,…,N, and the edges are numbered 
// 1,2,…,M.
// Edge 
// i(i=1,2,…,M) connects vertices 
// u 
// i
// ​
//   and 
// v 
// i
// ​
//  .

// Determine if this graph is a path graph. 
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> u(m), v(m);
    for (int i = 0; i < m; i++) {
        cin >> u[i] >> v[i];
    }
    //check if the graph is a path graph or not by checking if the graph is connected or not
    //if the graph is connected then it is a path graph
    //if the graph is not connected then it is not a path graph
    //if the graph is connected then the number of edges should be equal to the number of vertices - 1
    //if the number of edges is equal to the number of vertices - 1 then the graph is a path graph
    //if the number of edges is not equal to the number of vertices - 1 then the graph is not a path graph
    if (m == n - 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
} 