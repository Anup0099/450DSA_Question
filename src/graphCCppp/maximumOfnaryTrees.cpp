#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    int maxDepth(Node *root)
    {
        if(root == NULL)return 0;
        int sum=1;
        for(auto i:root->children){
            sum=max(sum,1+maxDepth(i));
        }
        return sum;
    }
};
int main() {}