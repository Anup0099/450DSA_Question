#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};
int widthOfBinaryTree(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});
    int ans = 0;
    while (!q.empty())
    {
        int size = q.size();
        int mini = q.front().second;
        int first, last;
        for (int i = 0; i < size; i++)
        {
            int curr_id = q.front().second - mini;
            TreeNode *curr_node = q.front().first;
            q.pop();
            if (i == 0)
            {
                first = curr_id;
            }
            if (i == size - 1)
            {
                last = curr_id;
            }
            if (curr_node->left != NULL)
            {
                q.push({curr_node->left, 2 * curr_id + 1});
            }
            if (curr_node->right != NULL)
            {
                q.push({curr_node->right, 2 * curr_id + 2});
            }
        }
        ans = max(ans, last - first + 1);
    }
    return ans;
}ddd
int main()
{
} 