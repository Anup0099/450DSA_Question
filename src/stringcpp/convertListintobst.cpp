#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreNode()
    {
        val = 0;
        left = NULL;
        right = NULL;
    }
} TreeNode *sortedListToBST(TreeNode *head)
{
    vector<int> v;
    while (head)
    {
        v.push_back(head->val);
        head = head->next;
    }
    return f(v, 0, v.size() - 1);
}
TreeNode *f(vector<int> v, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = l + (r - l) / 2;
    TreeNode *node = new TreeNode(v[mid]);
    node->left = f(v, l, mid - 1);
    node->right = f(v, mis + 1, r);
    return node;
}
int main() {}