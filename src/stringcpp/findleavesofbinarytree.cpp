#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x),
}


int height(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    int LH = height(root->left);
    int RH = height(root->right);
    int h = 1 + max(LH, RH);
}
vector<vector<int>> findLeaves(TreeNode *root)
{
    map<int, vector<int>> mp;
    height(root);

    vector<vector<int>> result;
    map<int, vector<int>>::iterator itr;
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        result.push_back(itr.second());
    }
    int m = result.size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return result;
}
int main() {}