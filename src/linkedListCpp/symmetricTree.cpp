#include <bits/stdc++.h> 
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

bool isSymmetric(TreeNode *root)
{
    if (root == NULL)
    {
        return true;
    }
    queue<TreeNode *> q;
    q.push(root->left);
    q.push(root->right);
    while (!q.empty())
    {
        TreeNode *left = q.front();
        q.pop();
        TreeNode *right = q.front();
        q.pop();
        if (left == NULL && right == NULL)
        {
            continue;
        }
        if (left == NULL || right == NULL)
        {
            return false;
        }
        if (left->val != right->val)
        {
            return false;
        }
        q.push(left->left);
        q.push(right->right);
        q.push(left->right);
        q.push(right->left);
    }
    return true;
}

int main() {} 