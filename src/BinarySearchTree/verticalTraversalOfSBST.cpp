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
void traversal(TreeNode *root){
    map<int,vector<int>>mp;
    queue<pair<TreeNode *,int>>q;
    q.push({root,0});

    while(q.empty() == false){
        auto p=q.front();
        TreeNode *curr=p.first;
        int hd=p.second;
        mp[hd].push_back(curr->val);
        q.pop();
        if(curr->left!=NULL)
            q.push({curr->left,hd-1});
        if(curr->right!=NULL)
            q.push({curr->right,hd+1});
    }
    for(auto it:mp){
        vector<int>v=it.second;
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }

} 
int main() { 
    TreeNode *root=new TreeNode(10);
    root->left=new TreeNode(20);
    root->right=new TreeNode(30);
    root->left->left=new TreeNode(40);
    root->left->right=new TreeNode(50);
    root->right->left=new TreeNode(60);
    root->right->right=new TreeNode(70);
    traversal(root);
    return 0;
}
