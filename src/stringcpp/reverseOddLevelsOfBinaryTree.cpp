#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode() : val(0), left(NULL), right(NULL);

} void dfs(TreeNode *root)
{
}
TreeNode *reverseOddLevels(TreeNode *root)
{
    int odd = 1;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int t = q.size();
        vector<int> store;
        while (t--)
        {
            TreeNode *node = q.front();
            q.pop();
            if (node->left)
            {
                q.push(node->left), store.push_back(node->left->val);
            }
            if (node->right)
            {
                q.push(node - right), store.push_back(node->right->val);
            }
        }
        if (odd and store.size() != 0)
        {
            t = q.size();
            int i = store.size();
            while (t--)
            {
                TreeNode *node = q.front();
                q.pop();
                node->val = store[i--];
                q.push(node);
            }
        }
        odd = 1 - odd;
    }
    return root;
}
int main() {}