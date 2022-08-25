#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    TreeNode *left;
    TreeNode *right;
    int val;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
{
    if (original == NULL)
        return NULL;
    if (original == target)
        return cloned;
    TreeNode *l = getTargetCopy(original->left, cloned->left, target);
    TreeNode *r = getTargetCopy(original->right, cloned->right, target);
    return l ? l : r;
}
int main() {}