#include <bits/stdc++.h>
using namespace std;

vector<int>topView(Node*root) {
    vector<int>ans;if(root==NULL){
        return ans;
    }
    map<int,int>mpp;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()) {
        auto it = q.front();
        q.pop();
        Node* node = it->first;
        int line = it->second;
        if(mpp.find(line)==mpp.end()){
            mpp[line] = node->data;
        }
        if
    }
}
int main(){
    
}