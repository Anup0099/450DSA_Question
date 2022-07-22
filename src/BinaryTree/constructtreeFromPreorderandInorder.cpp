#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;

    node (int x){
        data=x;
        left=NULL;
        right=NULL;
    }

};
int preIndex=0;
node *cTree(int in[],int pre[],int is,int ie){
    if(is>ie){
        return NULL;
    }
    node *root=new node(pre[preIndex++]);
    int inIndex=0;
    for (int  i = is; i <= ie; i++)
    {
        if(in[ie]==root->data){
            inIndex=i;
            break;
        }
    }
    root->left=cTree(in,pre,is,inIndex-1);
    root->right=cTree(in,pre,inIndex+1,ie);
    return root;
    
}
int main(){
    

}