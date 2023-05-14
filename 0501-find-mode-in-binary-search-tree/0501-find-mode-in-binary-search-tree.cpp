/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
void finding(TreeNode* root,unordered_map<int,int>&mp){
        if(root==NULL){
            return ;
        }
        mp[root->val]++;
        finding(root->left,mp);
        finding(root->right,mp);
    }
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mp;
        finding(root,mp);
        int maxvalue=INT_MIN;
        vector<int>ans;
        for(auto i:mp){
            if(maxvalue<i.second){
                maxvalue=i.second;
            }
        }
        for(auto i:mp){
            if(i.second==maxvalue){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};