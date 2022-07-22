#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};
int sum = 0;
int height(TreeNode *root){

    if(root==NULL)
        return 0;
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}
void findSum(TreeNode *root,int curr,int depth){
    if(root!=NULL)
    {
        if(curr==depth){
            sum += root->val;
        }
        findSum(root->left,curr+1,depth);
        findSum(root->right,curr+1,depth);
    }
}
int deepestLeavesSum(TreeNode *root)
{
    int depth=height(root);
    findSum(root,1,depth);
    return sum;
    
    
}
int main()
{   
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);
    cout<<deepestLeavesSum(root);
    return 0;
}