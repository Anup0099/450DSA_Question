struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void dfs(TreeNode* root,vector<int>&res){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)return;
    if(root->left==NULL){
        res.push_back(root->right->val);
    }
    if(root->right==NULL){
        res.push_back(root->left->val);
    }
    dfs(root->left,res);
    dfs(root->right,res);
}
vector<int>find(TreeNode* root){
    vector<int>res;
    if(root==NULL)return res;
    if(root->left==NULL && root->right==NULL)return res;
    //dfs
    dfs(root,res);
    return res;
}

int main() {
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->right=new TreeNode(4);
    root->right->left=new TreeNode(5);
    root->right->right=new TreeNode(6);
    vector<int>res=find(root);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}