#include <bits/stdc++.h>
using namespace std;
struct node
{
    node *left;
    node *right;
    int val;
    node(int x) : left(NULL), right(NULL), val(x) {}
};
int maxzWidth(node *root)
{
    if (root == NULL)
        return 0;
    queue<node*> q;
    q.push(root);
    int res = 0;
    while (q.empty() == false)
    {
        int count = q.size();
        res = max(res, count);
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();

            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    return res;
}

int main() {
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << maxzWidth(root) << endl;
    return 0;  
}