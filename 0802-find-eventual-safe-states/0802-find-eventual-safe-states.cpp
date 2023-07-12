class Solution {
public:
   bool iscycle(vector<vector<int>>&graph,int src,vector<bool>&visited,vector<bool>&inRecursion){
    int n= graph.size();
    int m= graph[0].size();
    visited[src]=true;
    inRecursion[src]=true;
    for(auto  &v:graph[src]){
        if(!visited[v] && iscycle(graph,v,visited,inRecursion)){
            return true;
        }else{
            if(inRecursion[v])return true;
        }
    }
    inRecursion[src]=false;
    return false;

}
vector<int>eventualSafeNodes(vector<vector<int>>&graph)
{
    int v=graph.size();
    //what is the depth first search in cycle 
    vector<bool>visited(v,false);
    vector<bool>inRecursion(v,false);
    for(int i=0;i<v;i++){
        if(!visited[i]){
            iscycle(graph,i,visited,inRecursion);
        }
    }
    vector<int>safeNodes;
    for(int i=0;i<v;i++){
        if(!inRecursion[i]){
            safeNodes.push_back(i);
        }
    }
    return safeNodes;


}
};