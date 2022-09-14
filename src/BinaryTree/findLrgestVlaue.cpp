#include <bits/stdc++.h>
using namespace std;
struct treeNode
{
    int val;
    treeNode *left;
    treeNode *right;
    treeNode() : val(0), left(nullptr), right(nullptr) {}
    treeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    treeNode(int x, treeNode *left, treeNode *right) : val(x), left(left), right(right) {}
};
void value(treeNode *root, vector<int> &v)
{
    vector<int> v;
    queue<treeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();

        while (size--)
        {
            treeNode *curr = q.front();
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
            v.push_back(curr->val);
        }
    }
    return;
}
vector<int> largestValues(TreeNode *root)
{
    if (root == NULL)
        return {};
    vector<int> v;
    value(root, v);
    return v;
}
int main() {}