#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution
{

public:
    void markParents(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parent_track, TreeNode *target)
    {

        queue<TreeNode *> queue;
        queue.push(root);
        while (!queue.empty())
        {
            TreeNode *curr = queue.front();
            queue.pop();
            if (curr->left != NULL)
            {
                parent_track[curr->left] = curr;
                queue.push(curr->left);
            }
            if (curr->right != NULL)
            {
                parent_track[curr->right] = curr;
                queue.push(curr->right);
            }
        }
        // push the target node to the queue
    }

    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        unordered_map<TreeNode *, TreeNode *> parent_track;
        markParents(root, parent_track, target);
        unordered_map<TreeNode *, bool> visited;
        queue<TreeNode *> queue;
        queue.push(target);
        visited[target] = true;
        int curr_leve = 0;
        while (!queue.empty())
        {
            int size = queue.size();
            // second bfs to go upto k leveel from target node using our hashtable info
            if (curr_leve == k)
            {
                break;
            } // if we are at k level then break
            for (int i = 0; i < size; i++)
            {
                TreeNode *curr = queue.front();
                queue.pop();
                if (curr->left != NULL && !visited[curr->left])
                {
                    queue.push(curr->left);
                    visited[curr->left] = true;
                }
                if (curr->right != NULL && !visited[curr->right])
                {
                    queue.push(curr->right);
                    visited[curr->right] = true;
                }
                if (parent_track[curr] && !visited[parent_track[curr]])
                {
                    queue.push(parent_track[curr]);
                    visited[parent_track[curr]] = true;
                }
            }
        }
        vector<int> result;
        while (!queue.empty())
        {
            TreeNode *current = queue.front();
            queue.pop();
            result.push_back(current->val);
        }
        return result;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);
    Solution s;
    vector<int> result = s.distanceK(root, root->left->left, 2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}