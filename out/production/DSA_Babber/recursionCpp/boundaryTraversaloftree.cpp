#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

isLeaves(node *root)
{
    if (!root)
        return false;
    if (!root->left && !root->right)
        return true;
    return false;
}

void addLeft(node *root, vector<int> &res)
{
    node *curr = root->left;
    vector<int> temp;
    while (curr)
    {
        if (!isLeaves(curr))
            res.push_back(curr->data);
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void addRight(node *root, vector<int> &res)
{
    vector<int> temp;
    node *curr = root->right;
    vector<int> temp;
    while (curr)
    {
        if (!isLeaves(curr))
            temp.push_back(curr->data);
        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }
    for (int i = temp.size() - 1; i >= 0; i--)
        res.push_back(temp[i]);
}

vector<int> printboundary(node *root)
{
    vector<int> res;
    if (!root)
        return res;

    if (!isLeaves(root))
        res.push_back(root->data);
    res.push_back(root->data);
    addLeft(root, res);
    addRight(root, res);
    return res;
}
vector<vector<int>> verticalOrderTraversal(node *root)
{
    map<int, map<int, multiset<int>>> nodes;
    queue<pair<node *, pair<int, int>>> todo;
    todo.push({root, {0, 0}});
    while (!todo.empty())
    {
        auto p = todo.front();
        todo.pop();
        node *node = p.first;
        nodes[x][y].insert(node->data);
        if (node->left)
            todo.push({node->left, {x - 1, y + 1}});
        if (node->right)
            todo.push({node->right, {x + 1, y + 1}});
    }
    vector<vector<int>> ans;
    for (auto p : nodes)
    {
        vector<int> col;
        for (auto q : p.second)
        {
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}
int main()
{
}