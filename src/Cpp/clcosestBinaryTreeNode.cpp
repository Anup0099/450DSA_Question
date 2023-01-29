#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode
{

public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {

        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode()
    {

        if (left)
            delete left;
        if (right)
            delete right;
    }
};

int findClosestElement(BinaryTreeNode<int> *node, int k)
{
    // Write your code here.
    int closest = node->data;
    while (node)
    {
        int Diff = abs(node->data - k);
        int mindiff = abs(closest - k);
        if (Diff <= mindiff)
        {

            if (Diff < mindiff)
            {
                closest = node->data;
            }
            else if (diff == mindiff and closest > node->data)
            {
                closest = node->data;
            }
        }
        if (node->data < k)
            node = node->right;
        else
            node = node->left;
    }
    return closest;
}