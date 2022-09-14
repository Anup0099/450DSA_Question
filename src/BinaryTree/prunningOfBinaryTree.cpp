#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int helper(TreeNode *root) { 
        if(root==NULL) return 0;
        if(root->left ==NULL && root->right ==NULL) {
            if(root->val==1){
                return 1;
            }else{
                return 0;
            }
        }
        int leftSub=helper(root->left);
        int rightSub=helper(root->right);
        if(leftSub==0){
            root->left=NULL;
        }
        if(rightSub==0){
            root->right=NULL;
        }
        return leftSub+rightSub+(root->val==1?1:0);
    }
    TreeNode *pruneTree(TreeNode *root)
    {
        if(helper(root)==0){
            return NULL;
        }
        return root;
    }
};
int main() {}