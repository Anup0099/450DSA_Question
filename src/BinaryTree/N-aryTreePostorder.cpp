#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};
void solve(Node *root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    for(int i=0;i<root->children.size();i++){
        solve(root->children[i],ans);
    }
    ans.push_back(root->val);
}
vector<int> postorder(Node *root)
{
    
    vector<int> ans;
    solve(root,ans);
    return ans;
    
}

int main() {}