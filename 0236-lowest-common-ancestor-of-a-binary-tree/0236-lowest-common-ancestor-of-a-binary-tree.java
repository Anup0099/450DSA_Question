/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
   public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        ArrayList<TreeNode> path1= new ArrayList<>();
        ArrayList<TreeNode> path2= new ArrayList<>();
        getPath(root,p,path1);
        getPath(root,q,path2);
         int i;
        for(i=0;i<path1.size() && i<path2.size();i++){
            if(path1.get(i)!=path2.get(i))
            break;
        }
     TreeNode lca = path1.get(i-1);
     return lca;
    }
public boolean getPath(TreeNode root,TreeNode n, ArrayList<TreeNode> path){
        if(root==null)
        return false;

        path.add(root);

        if(root==n)
        return true;
      
    boolean fl = getPath(root.left,n,path);
    boolean fr = getPath(root.right,n,path);

    if(fl || fr)
     return true;

     path.remove(path.size()-1);
     return false;
     
    }
}