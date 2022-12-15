#include <bits/stdc++.h> 
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
}; 
void sum(TreeNode *root,int hd,map<int,int>&mp){
    if(root==NULL)
        return;
    sum((*root).left,hd-1,mp);
    mp[hd]+=root->val;
    sum(root->right,hd+1,mp);
}
vector<vector<int>>verticalTraversal(TreeNode *root){
   map<int,int>mp;
    sum(root,0,mp);
    for(auto it:mp){
        cout<<it.second<<endl;
    }
}
int main() { 

    
}
