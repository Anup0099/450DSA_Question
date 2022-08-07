#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    // node *prev;
    node(int x)
    {
        data = x;
        // prev = NULL;
        next = NULL;
    }
};

node *middle(node *root)
{
    if (root == NULL)
        return NULL;
    node *slow = root;
    node *fast = root;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *middle2(node *head)
{
    if (head == NULL)
        return NULL;
    node *curr = head;
    vector<node *> v;
    while (curr != NULL)
    {
        v.push_back(curr);
        curr = curr->next;
    }
    int n = v.size();
    int mid = n / 2;
    if (n % 2 == 0)
        return v[mid - 1];
    else
        return v[mid];
}
int main()
{
    node *root = new node(1);
    root->next = new node(2);
    root->next->next = new node(3);
    root->next->next->next = new node(4);
    root->next->next->next->next = new node(5);
    root->next->next->next->next->next = new node(6);
    cout << middle2(root)->data << endl;
}
