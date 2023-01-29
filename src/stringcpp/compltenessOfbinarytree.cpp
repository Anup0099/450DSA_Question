#include <bits/stdc++.h>
using namespace std;
// check karna hai binary tree complete ha ki nahi
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(x), left(NULL), right(NULL);
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    // asked in amazon
    bool isCompleteTree(TreeNode *root)
    {
        // using bfs approach
        queue<TreeNode *> q;
        q.push(root);
        bool past = false; // kya aapne past me null node dekha hai????
        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();
            if (node == NULL)
            {
                past = true;
            }
            else
            {
                if (past == true)
                {
                    return false; // agar dekha hai to complete inary tree  nahi hai
                }
                q.push(node->left);//put left node inside queue
                q.push(node->right);//put right node inside queue
            }
        }
        return true;
    }
} 
int main() {
    
}