#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left,*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }

};
 bool isBST(Node* root) 
    {
        // Your code here
        if(root==NULL)
            return true;
        return isValid(root,LONG_MIN,LONG_MAX);

    }
    bool isValid(Node* root,long minval,long maxval){
        if(root==NULL)
            return true;
        if(root->data<minval || root->data>maxval)
            return false;
        return isValid(root->left,minval,root->data) && isValid(root->right,root->data,maxval);
    }
int main(){


}