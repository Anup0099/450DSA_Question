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
long long SUM = 0;
long long maxp = 0;
int totalSum(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    return root->val + totalSum(root->left) + totalSum(root->right);
}
int find(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    int leftsum = find(root->left);
    int rightsum = find(root->right);
    int subtreesum = leftsum + rightsum + root->val;
    int remaining = SUM - subtreesum;
    maxp = max(maxp, (long long)subtreesum * remaining);

    return subtreesum;
}
int maxProduct(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    maxp = 0;
    SUM = totalSum(root);
    find(root);

    return maxp % (int)(1e9 + 7);
}
vector<int> rightSideView(TreeNode *root)
{   vector<int> ans;
    if(root == nullptr)
        return {};
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        TreeNode* temp=nullptr;
        for(int i=0;i<n;i++){
            temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        ans.push_back(temp->val);
    }
    return ans;
}
int main() {}