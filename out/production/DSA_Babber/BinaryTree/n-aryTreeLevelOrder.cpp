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
   
    vector<vector<int>> levelOrder(Node *root)
    {
       vector<vector<int>> ans;
       if(root==NULL)return ans;
       queue<Node*> q;
         q.push(root);
         while(!q.empty()){
            vector<int>ans1;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* temp=q.front();
                q.pop();
                ans1.push_back(temp->val);
                for(int j=0;j<temp->children.size();j++){
                    q.push(temp->children[j]);
                }
            }
            ans.push_back(ans1);
         }
            return ans;
    }

};
int main() {}