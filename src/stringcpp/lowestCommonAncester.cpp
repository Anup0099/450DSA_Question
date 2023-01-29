#include <bits/stdc++.h>
using namespace std;
// lowest common ancester
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL);
};
class Solution
{
public:
    //
    TreeNode *lowestCommonAncester(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL)
            return NULL;
        if (root == p || root == q)
            return root;
        // left side leftN nikal lo

        TreeNode *leftN = lowestCommonAncester(root->left, p, q); // recursion call se left me p or q find karo
        // right se rightn nikal lo

        TreeNode *rightN = lowestCommonAncester(root->right, p, q); // recursion call se right me p or find karna hai
        if (leftN != NULL && rightN != NULL)
        {
            // agar dono not null hai to return root
            return root;
        }
        if (leftN != NULL)
        {
            // agaar khali left not null hai to ans leftn
            return leftN;
        }
        // else ans hoga rightn
        return rightN;
    }
} int main() {}