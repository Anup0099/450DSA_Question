#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right)
};

class Solution
{
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int n = preorder.size();
        if (n == 0)
            return NULL;
        TreeNode *root = new TreeNode(preorder[0]);
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (inorder[i] == preorder[0])
                break;
        }
        vector<int> preleft, preright, inleft, inright;
        for (int j = 0; j < i; j++)
        {
            preleft.push_back(preorder[j + 1]);
            inleft.push_back(inorder[j]);
        }
        for (int j = i + 1; j < n; j++)
        {
            preright.push_back(preorder[j]);
            inright.push_back(inorder[j]);
        }
        root->left = buildTree(preleft, inleft);
        root->right = buildTree(preright, inright);
        return root;
    }
};
int main() {}