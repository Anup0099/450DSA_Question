#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node *next;
    Node(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
Node *connect(Node *root)
{
    if (root == NULL)
        return NULL;
    Node *curr = root;
    while (curr->left != NULL)
    {
        Node *temp = curr;
        while (curr != NULL)
        {
            curr->left->next = curr->right;
            curr->right->next = curr->next == NULL ? NULL : curr->next->left;
            curr = curr->next;
        }
        curr = temp->left;
    }
    return root;
}

int main()
{
}
