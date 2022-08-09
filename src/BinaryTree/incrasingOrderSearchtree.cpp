#include <bits/stdc++.h> 
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}};
    TreeNode *curr=new TreeNode(0);
    void helper(TreeNode* node) {
        if(node==NULL){
            return;
        }
        helper(node->left);
        curr->right=node;
        curr=node;
        helper(node->right);

    }
  TreeNode* increasingBST(TreeNode* root) {
        TreeNode *ans= curr;
        helper(root);
        return ans->right;
    }
int main() {
  TreeNode *root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(3);
  root->left->left=new TreeNode(4);
  root->left->right=new TreeNode(5);    
  TreeNode *ans=increasingBST(root);
  while(ans) {
    cout<<ans->val<<" ";
    ans=ans->right;
  }
  return 0;      
} 