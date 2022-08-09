#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}

}
;
TreeNode *searchBST(TreeNode *root,int x){
    TreeNode *curr=root;
    while(curr!=NULL){
        if(curr->val==x){
            return curr;
        }
        else if(curr->val>x){
            curr=curr->left;
        }
        else{
            curr=curr->right;
        }
        return curr;
    }
}

int main() {}