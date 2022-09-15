#include <bits/stdc++.h> 
using namespace std;
struct treeNode {
    int val;
    treeNode *left;
    treeNode *right;
    treeNode() : val(0), left(nullptr), right(nullptr) {}
    treeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    treeNode(int x, treeNode *left, treeNode *right) : val(x), left(left), right(right) {}
};
vector<vector<int>>levelOrder(treeNode *root){
    vector<vector<int>>ans;
    if(root==NULL)return ans;
    queue<treeNode*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int>level;
        for(int i=0; i<size;i++){
            treeNode *curr=q.front();
            q.pop();
            if(curr->left!=NULL)q.push(curr->left);
            if(curr->right!=NULL)q.push(curr->right);
            level.push_back(curr->val);
        }
        ans.push_back(level);
    }
    return ans;

}
int main() {} 