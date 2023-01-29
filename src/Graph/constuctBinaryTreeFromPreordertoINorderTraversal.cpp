#include <bits/stdc++.h>

using namespace std;

struct node
{
  int data;
  struct node *left, *right;
};

struct node *newNode(int data)
{
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return (node);
}
node *constructTree(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, map<int, int> &mp)
{
  if (preStart > preEnd || inStart > inEnd)
    return NULL;

  node *root = newNode(preorder[preStart]);
  int elem = mp[root->data];
  int nElem = elem - inStart;

  root->left = constructTree(preorder, preStart + 1, preStart + nElem, inorder,
                             inStart, elem - 1, mp);
  root->right = constructTree(preorder, preStart + nElem + 1, preEnd, inorder,
                              elem + 1, inEnd, mp);

  return root;
}

node *buildTree(vector<int> &preorder, vector<int> &inorder)
{
  int preStart = 0, preEnd = preorder.size() - 1; // whats is the purpose because to travese the vector
  int inStart = 0, inEnd = inorder.size() - 1;

  map<int, int> mp;
  for (int i = inStart; i <= inEnd; i++)
  {
    mp[inorder[i]] = i;
  }

  return constructTree(preorder, preStart, preEnd, inorder, inStart, inEnd, mp);
}
node *solve(vector<int> &preorder, vector<int> &inorder, int start, int end, int idx)
{
  if (start > end)
    return NULL;
  int rootVal = preorder[idx];
  int i = start;
  for (; i <= end; i++)
  {
    if (inorder[i] == rootVal)
    {
      break;
    }
  }
  idx++;
  node *root = new node(rootVal);
  root->left = solve(preorder, inorder, start, i - 1, idx);
  root->right = solve(preorder, inorder, i + 1, end, idx);
  return root;
}
node *buildTree(vector<int> preorder, vector<int> inorder)
{
  int n = preorder.size();
  int indx = 0;
  return solve(preorder, inorder, 0, n - 1, idx);
}

int main()
{

  vector<int> preorder{10, 20, 40, 50, 30, 60};
  vector<int> inorder{40, 20, 50, 10, 60, 30};
  node *root = buildTree(preorder, inorder);
  return 0;
}