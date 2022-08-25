#include <bits/stdc++.h> 
using namespace std;
// You are given a directed graph with n nodes labeled from 0 to n - 1, where each node has exactly one outgoing edge.

// The graph is represented by a given 0-indexed integer array edges of length n, where edges[i] indicates that there is a directed edge from node i to node edges[i].

// The edge score of a node i is defined as the sum of the labels of all the nodes that have an edge pointing to i.

// Return the node with the highest edge score. If multiple nodes have the same edge score, return the node with the smallest index. 
 int edgeScore(vector<int>& edges) {
    int n = edges.size();
    vector<int> score(n, 0);
    for (int i = 0; i < n; i++)
    {
        score[i] = accumulate(edges.begin(), edges.end(), 0);
        edges[i] = 0;
    }
    return max_element(score.begin(), score.end()) - score.begin();
    
    }
int main() {} 