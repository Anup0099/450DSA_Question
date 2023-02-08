#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<int> printLeafNodes(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return {};
    }
    if (root->left == NULL and root->right == NULL)
    {
        ans.push_back(root->val);
        return ans;
    }
    vector<int> left = printLeafNodes(root->left);
    //print left

    // for (auto it : left)
    // {
    //     cout << it << " ";
    // }



    vector<int> right = printLeafNodes(root->right);
    //print right

    // for (auto it : right)
    // {
    //     cout << it << " ";
    // }




    for (auto it : left)
    {
        ans.push_back(it);
    }
    for (auto it : right)
    {
        ans.push_back(it);
    }
    return ans;
}


vector<int>printLeafNodes(TreeNode *root){
    stack<int>st;
    vector<int>ans;
    

}
int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<int> ans = printLeafNodes(root);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}