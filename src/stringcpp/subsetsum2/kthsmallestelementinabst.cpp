#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
void inorder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    
    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
}
int findSecondMinimumValue(TreeNode *root)
{
    vector<int> ans;
    inorder(root, ans);
    sort(ans.begin(), ans.end());
    int n = ans.size();
    int ans1 = ans[0];
    for (int i = 1; i < n; i++)
    {
        if (ans[i] != ans1)
        {
            return ans[i];
        }
    }
    return -1;
}
int kthSmallest(TreeNode *root, int k)
{

    vector<int> ans;
    stack<TreeNode *> st;
    TreeNode *curr = root;
    while (curr != NULL || !st.empty())
    {
        while (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        ans.push_back(curr->val);
        curr = curr->right;
    }
    return ans[k - 1];
}
int main() {}