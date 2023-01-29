#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *deleteHelper(TreeNode *root, unordered_set<int> &set)
    {
        if (root == NULL)
            return NULL;

        root->left = deleteHelper(root->left, st);
        root->right = deleteHelper(root->right, st);

        if (set.find(root->val) != set.end())
        {
            if (root->left != NUL)
            {

                result.push_back(root->left);
            }
            if (root->right != NULL)
            {
                result.push_back(root->right);
            }
            return NULL;
        }
        else
        {
            return root;
        }
    }
    vector<TreeNode *> delNodes(TreeNode *root, vector<int> &to_delete)
    {
        vector<TreeNode *> result;
        unordered_set<int> set;
        for (int &num : to_delete)
        {
            set.insert(num);
        }
        // delete helper fuction deletion ka kaam karega ye function

        deleteHelper(root, set);

        if (set.find(root->val) != set.end())
        {
            result.push_back(root);
        }
        return result;
    }
};
int main() {}