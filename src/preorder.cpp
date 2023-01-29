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
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        stack<TreeNode*>st;
        while (root || !st.empty()) {
            if (root) {
                ans.push_back(root -> val);
                if (root -> right) {
                    st.push(root -> right);
                }
                root = root -> left;
            } else {
                root = st.top();
                st.pop();
            }
        }
        return ans;
        // dfs
        // vector<int> ans;
        // stack<TreeNode *> s;
        // s.push(root);
        // while (s.size())
        // {
        //     auto node = s.top();
        //     s.pop();
        //     if (node)
        //     {
        //         ans.push_back(node->val);
        //         s.push(node->right);
        //         s.push(node->left);
        //     }
        // }
        // return ans;
        vector<int> ans;
        if (root)
        {
            ans.push_back(root->val);
            auto left = preorderTraversal(root->left);
            auto right = preorderTraversal(root->right);
        }
        return ans;
    }
};
int main() {}