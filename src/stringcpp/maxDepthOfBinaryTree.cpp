#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int maxDepth(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int leftHeight = maxDepth(root->left);
    cout << leftHeight <<  " ";
    cout<<endl;
    int rightHeight = maxDepth(root->right);
    cout << rightHeight << " ";
    
    return max(leftHeight, rightHeight) + 1;
}
int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout << maxDepth(root) << endl;
}